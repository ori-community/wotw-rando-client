#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorTransitionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorTransitionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorTransitionInfo_DEFINED)
#define IL2CPP_STRUCT_AnimatorTransitionInfo_DEFINED
struct AnimatorTransitionInfo {
    int32_t m_FullPath;
    int32_t m_UserName;
    int32_t m_Name;
    bool m_HasFixedDuration;
    float m_Duration;
    float m_NormalizedTime;
    bool m_AnyState;
    int32_t m_TransitionType;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatorTransitionInfo_FWDDECL)
#define IL2CPP_STRUCT_AnimatorTransitionInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimatorTransitionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorTransitionInfo_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorTransitionInfo_FWDDECL)
#include <Modloader/app/structs/AnimatorTransitionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorTransitionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
