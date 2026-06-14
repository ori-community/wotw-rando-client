#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_DEFINED
struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly {
    float t;
    float dt;
    float axx;
    float gravity;
    float damping;
    float weight;
    float dtInv;
    float maxDeviationDist;
    float maxDeviationDistSqr;
    bool ApplyScale;
    bool ApplyVeloNoise;
    bool ApplyPosNoise;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_FWDDECL)
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_PerFrameReadOnly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_PerFrameReadOnly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
