#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain_DEFINED)
#include <Modloader/app/structs/FBIKChain__Fields.h>
#if defined(IL2CPP_STRUCT_FBIKChain__Fields_DEFINED)
#define IL2CPP_STRUCT_FBIKChain_DEFINED
struct FBIKChain__Class;
struct FBIKChain {
    struct FBIKChain__Class* klass;
    MonitorData* monitor;
    struct FBIKChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKChain_FWDDECL)
#define IL2CPP_STRUCT_FBIKChain_FWDDECL
#include <Modloader/app/structs/FBIKChain__Class.h>
#endif
#undef IL2CPP_STRUCT_FBIKChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain_DEFINED) && !defined(IL2CPP_STRUCT_FBIKChain_FWDDECL)
#include <Modloader/app/structs/FBIKChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
