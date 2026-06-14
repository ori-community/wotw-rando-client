#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_DEFINED)
#include <Modloader/app/structs/DefaultCameraProviderEntry_Type__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_DefaultCameraProviderEntry_Type__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct __declspec(align(8)) DefaultCameraProviderEntry__Fields {
    DefaultCameraProviderEntry_Type__Enum EntryType;

    struct Vector2 Padding;
    float Weight;
    struct MoonReference_1_UnityEngine_Transform_* Reference;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_FWDDECL)
#include <Modloader/app/structs/DefaultCameraProviderEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultCameraProviderEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
