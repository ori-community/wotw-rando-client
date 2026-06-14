#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchJointsJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchJointsJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsJob_DEFINED)
#include <Modloader/app/structs/TransformStreamHandle.h>
#if defined(IL2CPP_STRUCT_TransformStreamHandle_DEFINED)
#define IL2CPP_STRUCT_MatchJointsJob_DEFINED
struct MatchJointsJob {
    bool MatchPosition;
    bool MatchRotation;
    struct TransformStreamHandle m_sourceJointHandle;
    struct TransformStreamHandle m_targetJointHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchJointsJob_FWDDECL)
#define IL2CPP_STRUCT_MatchJointsJob_FWDDECL
#endif
#undef IL2CPP_STRUCT_MatchJointsJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsJob_DEFINED) && !defined(IL2CPP_STRUCT_MatchJointsJob_FWDDECL)
#include <Modloader/app/structs/MatchJointsJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchJointsJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
