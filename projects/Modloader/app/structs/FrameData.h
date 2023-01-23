#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData_DEFINED)
#include <Modloader/app/structs/FrameData_Flags__Enum.h>
#include <Modloader/app/structs/PlayableOutput.h>
#if defined(IL2CPP_STRUCT_FrameData_Flags__Enum_DEFINED) && defined(IL2CPP_STRUCT_PlayableOutput_DEFINED)
#define IL2CPP_STRUCT_FrameData_DEFINED
struct FrameData {
    uint64_t m_FrameID;
    double m_DeltaTime;
    float m_Weight;
    float m_EffectiveWeight;
    double m_EffectiveParentDelay;
    float m_EffectiveParentSpeed;
    float m_EffectiveSpeed;
    FrameData_Flags__Enum m_Flags;

    struct PlayableOutput m_Output;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameData_FWDDECL)
#define IL2CPP_STRUCT_FrameData_FWDDECL
#endif
#undef IL2CPP_STRUCT_FrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData_DEFINED) && !defined(IL2CPP_STRUCT_FrameData_FWDDECL)
#include <Modloader/app/structs/FrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
