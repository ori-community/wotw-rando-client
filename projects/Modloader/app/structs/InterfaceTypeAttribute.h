#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterfaceTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterfaceTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute_DEFINED)
#include <Modloader/app/structs/InterfaceTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InterfaceTypeAttribute_DEFINED
struct InterfaceTypeAttribute__Class;
struct InterfaceTypeAttribute {
    struct InterfaceTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct InterfaceTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_InterfaceTypeAttribute_FWDDECL
#include <Modloader/app/structs/InterfaceTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InterfaceTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InterfaceTypeAttribute_FWDDECL)
#include <Modloader/app/structs/InterfaceTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterfaceTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
