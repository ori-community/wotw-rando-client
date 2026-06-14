#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorControllerParameter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorControllerParameter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorControllerParameterType__Enum.h>
#if defined(IL2CPP_STRUCT_AnimatorControllerParameterType__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimatorControllerParameter__Fields_DEFINED
struct String;
struct __declspec(align(8)) AnimatorControllerParameter__Fields {
    struct String* m_Name;
    AnimatorControllerParameterType__Enum m_Type;

    float m_DefaultFloat;
    int32_t m_DefaultInt;
    bool m_DefaultBool;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorControllerParameter__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AnimatorControllerParameter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorControllerParameter__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorControllerParameter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorControllerParameter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
