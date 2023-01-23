#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterData__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterData__Fields_DEFINED
struct __declspec(align(8)) GhostCharacterData__Fields {
    struct Vector3 Position;
    bool FaceLeft;
    float FeetAngle;
    struct Vector3 FeetPosition;
    struct Vector2 LocalSpeed;
    struct Quaternion MirrorHolderRotation;
    bool _Executed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostCharacterData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostCharacterData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
