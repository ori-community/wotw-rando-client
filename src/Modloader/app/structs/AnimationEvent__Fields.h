#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEvent__Fields_DEFINED)
#include <Modloader/app/structs/AnimationEventSource__Enum.h>
#include <Modloader/app/structs/AnimatorClipInfo.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>
#if defined(IL2CPP_STRUCT_AnimationEventSource__Enum_DEFINED) && defined(IL2CPP_STRUCT_AnimatorStateInfo_DEFINED) && defined(IL2CPP_STRUCT_AnimatorClipInfo_DEFINED)
#define IL2CPP_STRUCT_AnimationEvent__Fields_DEFINED
struct String;
struct Object_1;
struct AnimationState;
struct __declspec(align(8)) AnimationEvent__Fields {
    float m_Time;
    struct String* m_FunctionName;
    struct String* m_StringParameter;
    struct Object_1* m_ObjectReferenceParameter;
    float m_FloatParameter;
    int32_t m_IntParameter;
    int32_t m_MessageOptions;
    AnimationEventSource__Enum m_Source;

    struct AnimationState* m_StateSender;
    struct AnimatorStateInfo m_AnimatorStateInfo;
    struct AnimatorClipInfo m_AnimatorClipInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationEvent__Fields_FWDDECL
#include <Modloader/app/structs/AnimationState.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AnimationEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationEvent__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
