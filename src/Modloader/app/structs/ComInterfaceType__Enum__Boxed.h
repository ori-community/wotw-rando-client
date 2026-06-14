#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/ComInterfaceType__Enum.h>
#if defined(IL2CPP_STRUCT_ComInterfaceType__Enum_DEFINED)
#define IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_DEFINED
struct ComInterfaceType__Enum__Class;
struct ComInterfaceType__Enum__Boxed {
    struct ComInterfaceType__Enum__Class* klass;
    MonitorData* monitor;
    ComInterfaceType__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/ComInterfaceType__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ComInterfaceType__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/ComInterfaceType__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComInterfaceType__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
