#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClassInterfaceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClassInterfaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassInterfaceAttribute_DEFINED)
#include <Modloader/app/structs/ClassInterfaceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ClassInterfaceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ClassInterfaceAttribute_DEFINED
struct ClassInterfaceAttribute__Class;
struct ClassInterfaceAttribute {
    struct ClassInterfaceAttribute__Class* klass;
    MonitorData* monitor;
    struct ClassInterfaceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClassInterfaceAttribute_FWDDECL)
#define IL2CPP_STRUCT_ClassInterfaceAttribute_FWDDECL
#include <Modloader/app/structs/ClassInterfaceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ClassInterfaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassInterfaceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ClassInterfaceAttribute_FWDDECL)
#include <Modloader/app/structs/ClassInterfaceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClassInterfaceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
