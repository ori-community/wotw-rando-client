#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_DEFINED)
#include <Modloader/app/structs/ComInterfaceType__Enum.h>
#if defined(IL2CPP_STRUCT_ComInterfaceType__Enum_DEFINED)
#define IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_DEFINED
struct __declspec(align(8)) InterfaceTypeAttribute__Fields {
    ComInterfaceType__Enum _val;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterfaceTypeAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/InterfaceTypeAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterfaceTypeAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
