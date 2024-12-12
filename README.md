## Steps to reproduce
1. Build example GDExtension library with `scons`.
2. Open the project with Godot editor that has every libraries builtin.
3. The project scene runs successfully, `print` appear on stdout.
4. Build Godot editor with `builtin_icu4c=no`, and run the project.
5. Scene crashed with signal 11 when trying to output `print`.
