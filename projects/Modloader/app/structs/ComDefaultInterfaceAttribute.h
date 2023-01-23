#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComDefaultInterfaceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComDefaultInterfaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComDefaultInterfaceAttribute_DEFINED)
#include <Modloader/app/structs/ComDefaultInterfaceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ComDefaultInterfaceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ComDefaultInterfaceAttribute_DEFINED
struct ComDefaultInterfaceAttribute__Class;
struct ComDefaultInterfaceAttribute {
    struct ComDefaultInterfaceAttribute__Class* klass;
    MonitorData* monitor;
    struct ComDefaultInterfaceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComDefaultInterfaceAttribute_FWDDECL)
#define IL2CPP_STRUCT_ComDefaultInterfaceAttribute_FWDDECL
#include <Modloader/app/structs/ComDefaultInterfaceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ComDefaultInterfaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComDefaultInterfaceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ComDefaultInterfaceAttribute_FWDDECL)
#include <Modloader/app/structs/ComDefaultInterfaceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComDefaultInterfaceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
