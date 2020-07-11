os
==

> Operating system abstractions for ZZ

## Installation

Add this to your `zz.toml` file:

```toml
[dependencies]
os = "*"

[repos]
os = "git://github.com/zzmodules/os"
```

## Usage

```c++
using os
```

## API

### `os::arch() -> Arch`

Returns the detected architecture for the operating system.

```c++
if os::arch() == os::arch::arm { }
else if os::arch() == os::arch::arm64 { }
else if os::arch() == os::arch::ia32 { }
else if os::arch() == os::arch::mips { }
else if os::arch() == os::arch::ppc { }
else if os::arch() == os::arch::ppc64 { }
else if os::arch() == os::arch::x32 { }
else if os::arch() == os::arch::x64 { }
else { err::panic("unknown architecture"); }
```

### `os::eol() -> char *`

Returns the detected operating system specific "end-of-line" marker.

```c++
let eol = os::eol();
```

### `os::type() -> Type`

Returns the detected operating system type.

```c++
if os::type() == os::type::apple { }
else if os::type() == os::type::linux { }
else if os::type() == os::type::posix { }
else if os::type() == os::type::unix { }
else if os::type() == os::type::windows { }
else { err::panic("unknown operating system"); }
```

### `os::detect`

The following _preprocessor_ values are available for operating system
and architecture detection in _macro conditional statements_:

* `os::detect::amd`
* `os::detect::amd64`
* `os::detect::apple`
* `os::detect::arm`
* `os::detect::arm64`
* `os::detect::i386`
* `os::detect::linux`
* `os::detect::mips`
* `os::detect::posix`
* `os::detect::ppc`
* `os::detect::ppc64`
* `os::detect::unix`
* `os::detect::windows`

```c++
fn platform_specific() -> int
  if #(os::detect::apple) {
    return 1;
  } else if #(os::detect::linux) {
    return 2;
  } else if #(os::detect::unix) {
    return 3;
  } else if #(os::detect::posix) {
    return 4;
  } else if #(os::detect::windows) {
    return 5;
  } else {
    // unknown operating system
    return 0;
  }
```

## License

MIT
