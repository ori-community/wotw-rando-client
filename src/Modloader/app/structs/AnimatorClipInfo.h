#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorClipInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorClipInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo_DEFINED)
#define IL2CPP_STRUCT_AnimatorClipInfo_DEFINED
struct AnimatorClipInfo {
    int32_t m_ClipInstanceID;
    float m_Weight;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo_FWDDECL)
#define IL2CPP_STRUCT_AnimatorClipInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimatorClipInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorClipInfo_FWDDECL)
#include <Modloader/app/structs/AnimatorClipInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorClipInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
