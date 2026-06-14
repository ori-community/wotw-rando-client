#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_DEFINED
struct UberInteractionManager_InteractionInfo {
    float X;
    float Y;
    float Z;
    float MaxRadius;
    int32_t Version;
    int64_t LastAccelerationQueryId;
};
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionInfo_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
