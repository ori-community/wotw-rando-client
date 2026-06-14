#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32Exception_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Exception_DEFINED)
#include <Modloader/app/structs/Win32Exception__Fields.h>
#if defined(IL2CPP_STRUCT_Win32Exception__Fields_DEFINED)
#define IL2CPP_STRUCT_Win32Exception_DEFINED
struct Win32Exception__Class;
struct Win32Exception {
    struct Win32Exception__Class* klass;
    MonitorData* monitor;
    struct Win32Exception__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Win32Exception_FWDDECL)
#define IL2CPP_STRUCT_Win32Exception_FWDDECL
#include <Modloader/app/structs/Win32Exception__Class.h>
#endif
#undef IL2CPP_STRUCT_Win32Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Exception_DEFINED) && !defined(IL2CPP_STRUCT_Win32Exception_FWDDECL)
#include <Modloader/app/structs/Win32Exception.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32Exception.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
