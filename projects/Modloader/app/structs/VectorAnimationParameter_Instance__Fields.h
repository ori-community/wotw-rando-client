#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_DEFINED
struct VectorAnimationParameter;
struct __declspec(align(8)) VectorAnimationParameter_Instance__Fields {
    struct VectorAnimationParameter* m_parameter;
    struct Vector3 m_targetValue;
    struct Vector3 m_currentValue;
    bool m_previewMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_FWDDECL)
#define IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_FWDDECL
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VectorAnimationParameter_Instance__Fields_FWDDECL)
#include <Modloader/app/structs/VectorAnimationParameter_Instance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorAnimationParameter_Instance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
