#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectField__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectField__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectField__Fields_DEFINED
struct String;
struct __declspec(align(8)) VolumeEffectField__Fields {
    struct String* fieldName;
    struct String* fieldType;
    float valueSingle;
    struct Color valueColor;
    bool valueBoolean;
    struct Vector2 valueVector2;
    struct Vector3 valueVector3;
    struct Vector4 valueVector4;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectField__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectField__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectField__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectField__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeEffectField__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectField__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
