#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorStateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo_DEFINED)
#define IL2CPP_STRUCT_AnimatorStateInfo_DEFINED
struct AnimatorStateInfo {
    int32_t m_Name;
    int32_t m_Path;
    int32_t m_FullPath;
    float m_NormalizedTime;
    float m_Length;
    float m_Speed;
    float m_SpeedMultiplier;
    int32_t m_Tag;
    int32_t m_Loop;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo_FWDDECL)
#define IL2CPP_STRUCT_AnimatorStateInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimatorStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorStateInfo_FWDDECL)
#include <Modloader/app/structs/AnimatorStateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorStateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
