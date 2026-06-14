#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_DEFINED
struct SlugDirectionalAnimation;
struct __declspec(align(8)) SlugDirectionalAnimationPicker__Fields {
    struct SlugDirectionalAnimation* Animation;
    struct Vector3 m_lastDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_FWDDECL
#include <Modloader/app/structs/SlugDirectionalAnimation.h>
#endif
#undef IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlugDirectionalAnimationPicker__Fields_FWDDECL)
#include <Modloader/app/structs/SlugDirectionalAnimationPicker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugDirectionalAnimationPicker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
