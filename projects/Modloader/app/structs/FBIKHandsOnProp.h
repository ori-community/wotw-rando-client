#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKHandsOnProp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKHandsOnProp_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKHandsOnProp_DEFINED)
#include <Modloader/app/structs/FBIKHandsOnProp__Fields.h>
#if defined(IL2CPP_STRUCT_FBIKHandsOnProp__Fields_DEFINED)
#define IL2CPP_STRUCT_FBIKHandsOnProp_DEFINED
struct FBIKHandsOnProp__Class;
struct FBIKHandsOnProp {
    struct FBIKHandsOnProp__Class* klass;
    MonitorData* monitor;
    struct FBIKHandsOnProp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKHandsOnProp_FWDDECL)
#define IL2CPP_STRUCT_FBIKHandsOnProp_FWDDECL
#include <Modloader/app/structs/FBIKHandsOnProp__Class.h>
#endif
#undef IL2CPP_STRUCT_FBIKHandsOnProp_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKHandsOnProp_DEFINED) && !defined(IL2CPP_STRUCT_FBIKHandsOnProp_FWDDECL)
#include <Modloader/app/structs/FBIKHandsOnProp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKHandsOnProp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
