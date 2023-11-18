#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedReferences_AutoDetectParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedReferences_AutoDetectParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences_AutoDetectParams_DEFINED)
#define IL2CPP_STRUCT_BipedReferences_AutoDetectParams_DEFINED
struct BipedReferences_AutoDetectParams {
    bool legsParentInSpine;
    bool includeEyes;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedReferences_AutoDetectParams_FWDDECL)
#define IL2CPP_STRUCT_BipedReferences_AutoDetectParams_FWDDECL
#endif
#undef IL2CPP_STRUCT_BipedReferences_AutoDetectParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences_AutoDetectParams_DEFINED) && !defined(IL2CPP_STRUCT_BipedReferences_AutoDetectParams_FWDDECL)
#include <Modloader/app/structs/BipedReferences_AutoDetectParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedReferences_AutoDetectParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
