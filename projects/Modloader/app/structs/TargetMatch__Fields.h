#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetMatch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetMatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetMatch__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TargetMatch__Fields_DEFINED
struct Transform;
struct TargetMatch__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Root;
    struct Transform* BoneToMatch;
    struct Vector3 m_originalLocalRootPosition;
    struct Vector3 m_rootAndBoneDiff;
    struct Vector3 m_desiredPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetMatch__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetMatch__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TargetMatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetMatch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetMatch__Fields_FWDDECL)
#include <Modloader/app/structs/TargetMatch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetMatch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
