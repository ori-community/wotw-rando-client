#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_DEFINED)
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA__Fields.h>
#if defined(IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA__Fields_DEFINED)
#define IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_DEFINED
struct Win32Native_WIN32_FIND_DATA__Class;
struct Win32Native_WIN32_FIND_DATA {
    struct Win32Native_WIN32_FIND_DATA__Class* klass;
    MonitorData* monitor;
    struct Win32Native_WIN32_FIND_DATA__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_FWDDECL)
#define IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_FWDDECL
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA__Class.h>
#endif
#undef IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_DEFINED) && !defined(IL2CPP_STRUCT_Win32Native_WIN32_FIND_DATA_FWDDECL)
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
