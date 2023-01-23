#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationParameterSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationParameterSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameterSet__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationParameterSet__Fields_DEFINED
struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_;
struct List_1_Moon_AnimationParameter_Instance_;
struct __declspec(align(8)) AnimationParameterSet__Fields {
    bool m_previewMode;
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* m_parameters;
    struct List_1_Moon_AnimationParameter_Instance_* m_parametersList;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationParameterSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationParameterSet__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_.h>
#include <Modloader/app/structs/List_1_Moon_AnimationParameter_Instance_.h>
#endif
#undef IL2CPP_STRUCT_AnimationParameterSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameterSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationParameterSet__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationParameterSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationParameterSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
