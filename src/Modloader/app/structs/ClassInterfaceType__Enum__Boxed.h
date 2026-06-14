#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/ClassInterfaceType__Enum.h>
#if defined(IL2CPP_STRUCT_ClassInterfaceType__Enum_DEFINED)
#define IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_DEFINED
struct ClassInterfaceType__Enum__Class;
struct ClassInterfaceType__Enum__Boxed {
    struct ClassInterfaceType__Enum__Class* klass;
    MonitorData* monitor;
    ClassInterfaceType__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/ClassInterfaceType__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ClassInterfaceType__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/ClassInterfaceType__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClassInterfaceType__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
