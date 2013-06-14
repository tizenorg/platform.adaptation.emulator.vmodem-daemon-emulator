#git:slp/pkgs/v/vmodem-daemon-emulator
Name: vmodemd-emul
Version: 0.2.47
Release: 1
Summary: Modem Emulator
Group: System/ModemEmulator
License: GNU
Source0: %{name}-%{version}.tar.gz
Source1001: packaging/vmodemd-emul.manifest
BuildRequires: pkgconfig(glib-2.0)
BuildRequires: pkgconfig(vconf)
BuildRequires: pkgconfig(sqlite3)

%description
Virtual modem emulator

%prep
%setup -q

%build
autoconf
%configure

make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
mkdir -p %{buildroot}/usr/bin
make install prefix=%{buildroot}

mkdir -p %{buildroot}/usr/lib/systemd/system/emulator.target.wants
cp vmodem-x86.service %{buildroot}/usr/lib/systemd/system/.
ln -s ../vmodem-x86.service %{buildroot}/usr/lib/systemd/system/emulator.target.wants/vmodem-x86.service

mkdir -p %{buildroot}/etc/init.d
cp vmodemd %{buildroot}/etc/init.d/.
mkdir -p %{buildroot}/etc/rc.d/rc3.d
ln -s ../../init.d/vmodemd %{buildroot}/etc/rc.d/rc3.d/S03vmodemd

%clean
make clean
rm -f build

%post

%postun

%files
%defattr(-,root,root,-)
%attr(755,-,-) %{_bindir}/vmodem_x86
/etc/init.d/vmodemd
/etc/rc.d/rc3.d/S03vmodemd
/usr/lib/systemd/system/emulator.target.wants/vmodem-x86.service
/usr/lib/systemd/system/vmodem-x86.service

%changelog


