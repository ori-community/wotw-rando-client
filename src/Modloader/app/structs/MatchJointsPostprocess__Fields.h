#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchJointsPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchJointsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields.h>
#if defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_DEFINED)
#define IL2CPP_STRUCT_MatchJointsPostprocess__Fields_DEFINED
struct Transform;
struct MatchJointsPostprocess__Fields {
    struct JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields _;
    struct Transform* SourceJoint;
    struct Transform* TargetJoint;
    bool MatchPosition;
    bool MatchRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchJointsPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MatchJointsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchJointsPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/MatchJointsPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchJointsPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
