#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_DEFINED
struct FrameProfilerPlayerLoopInjector__StaticFields {
    struct PlayerLoopSystem m_beginPreloadingPLS;
    struct PlayerLoopSystem m_endPreloadingPLS;
    struct PlayerLoopSystem m_beginPresentWaitPLS;
    struct PlayerLoopSystem m_beginFramePLS;
    struct PlayerLoopSystem m_endFramePLS;
    struct PlayerLoopSystem m_beginFixedUpdatePLS;
    struct PlayerLoopSystem m_endFixedUpdatePLS;
    struct PlayerLoopSystem m_beginUpdateTimePLS;
    struct PlayerLoopSystem m_endUpdateTimePLS;
    struct PlayerLoopSystem m_beginPhysicsPLS;
    struct PlayerLoopSystem m_endPhysicsPLS;
    struct PlayerLoopSystem m_beginUpdatePLS;
    struct PlayerLoopSystem m_endUpdatePLS;
    struct PlayerLoopSystem m_beginParticleUpdatePLS;
    struct PlayerLoopSystem m_endParticleUpdatePLS;
    struct PlayerLoopSystem m_beginParticleEndUpdatePLS;
    struct PlayerLoopSystem m_endParticleEndUpdatePLS;
    struct PlayerLoopSystem m_beginEarlyUpdatePLS;
    struct PlayerLoopSystem m_endEarlyUpdatePLS;
    struct PlayerLoopSystem m_beginPreUpdatePLS;
    struct PlayerLoopSystem m_endPreUpdatePLS;
    struct PlayerLoopSystem m_beginPreLateUpdatePLS;
    struct PlayerLoopSystem m_endPreLateUpdatePLS;
    struct PlayerLoopSystem m_beginPostLateUpdatePLS;
    struct PlayerLoopSystem m_endPostLateUpdatePLS;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfilerPlayerLoopInjector__StaticFields_FWDDECL)
#include <Modloader/app/structs/FrameProfilerPlayerLoopInjector__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfilerPlayerLoopInjector__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
