# Kalyana Mittata

An AI assistant for Mahachulalongkorn University PhD dissertation research, extending a pre-existing AI chatbot using the Enlightenment Foundation Libraries (EFL).

## License

This project is licensed under the GNU Affero General Public License v3.0 (AGPLv3).

## Project Purpose

Kalyana Mittata (meaning "good friendship" in Pali) is being developed as part of a PhD dissertation project at Mahachulalongkorn University. The application extends a pre-existing AI chatbot with new capabilities and interfaces using the EFL toolkit.

## Prerequisites

Make sure you have the following installed on your system:

- EFL development libraries
- Meson build system
- Ninja build tool

### Ubuntu/Debian

```bash
sudo apt-get install meson ninja-build libefl-dev
```

### Fedora

```bash
sudo dnf install meson ninja-build efl-devel
```

### Arch Linux

```bash
sudo pacman -S meson ninja efl
```

## Project Structure

```
.
├── meson.build              # Main project configuration
├── src/
│   ├── meson.build          # Source build configuration
│   └── main.c               # Main application code
├── LICENSE                  # AGPLv3 license text
└── README.md                # This file
```

## Building the Project

1. Configure the build:

```bash
meson setup builddir
```

2. Compile the project:

```bash
cd builddir
ninja
```

3. Run the application:

```bash
./src/kalyana-mittata
```

## Installing the Application

```bash
cd builddir
ninja install
```

By default, this will install to `/usr/local/bin/`. You can change the installation prefix when configuring the build:

```bash
meson setup builddir --prefix=/usr
```

## Development Notes

This application is being built on top of a pre-existing AI chatbot. The EFL framework is being used to create a robust and customizable user interface for the AI assistant.

Key components:
- EFL-based GUI
- Integration with existing AI chatbot
- Custom extensions for PhD research purposes

## Future Enhancements

- Add Thai language support
- Implement Buddhist philosophical concepts
- Create specialized research tools
- Improve accessibility features

## Contributing

This is a research project for a PhD dissertation. If you're interested in contributing, please contact the project maintainer through Mahachulalongkorn University.

## Building with Custom Options

You can specify custom options when configuring your build:

```bash
meson setup builddir -Dbuildtype=release -Doptimization=3
```

Available build types:
- `debug`: Include debug information, no optimization
- `debugoptimized`: Include debug information, basic optimization
- `release`: No debug information, full optimization

## Cleaning the Build

```bash
ninja -C builddir clean
```

