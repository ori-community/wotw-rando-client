#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Keyframe_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Keyframe_INITIALIZING
#if !defined(IL2CPP_STRUCT_Keyframe_DEFINED)
#define IL2CPP_STRUCT_Keyframe_DEFINED
struct Keyframe {
    float m_Time;
    float m_Value;
    float m_InTangent;
    float m_OutTangent;
    int32_t m_WeightedMode;
    float m_InWeight;
    float m_OutWeight;
};
#endif
#if !defined(IL2CPP_STRUCT_Keyframe_FWDDECL)
#define IL2CPP_STRUCT_Keyframe_FWDDECL
#endif
#undef IL2CPP_STRUCT_Keyframe_INITIALIZING
#if !defined(IL2CPP_STRUCT_Keyframe_DEFINED) && !defined(IL2CPP_STRUCT_Keyframe_FWDDECL)
#include <Modloader/app/structs/Keyframe.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Keyframe.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
