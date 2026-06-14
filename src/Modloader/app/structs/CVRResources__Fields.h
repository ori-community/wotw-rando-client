#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRResources__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRResources__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRResources__Fields_DEFINED)
#include <Modloader/app/structs/IVRResources.h>
#if defined(IL2CPP_STRUCT_IVRResources_DEFINED)
#define IL2CPP_STRUCT_CVRResources__Fields_DEFINED
struct __declspec(align(8)) CVRResources__Fields {
    struct IVRResources FnTable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRResources__Fields_FWDDECL)
#define IL2CPP_STRUCT_CVRResources__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CVRResources__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRResources__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CVRResources__Fields_FWDDECL)
#include <Modloader/app/structs/CVRResources__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRResources__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
