#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxArmor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxArmor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxArmor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxArmor__Fields_DEFINED
struct Rigidbody__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct IEnumerator;
struct FoxArmor__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody__Array* pieces;
    struct Vector3__Array* piecesInitialPositions;
    struct Quaternion__Array* piecesInitialRotations;
    float angleMin;
    float angleMax;
    float speedMin;
    float speedMax;
    float timeUntilDisappear;
    struct IEnumerator* HidePiecesTempEnum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxArmor__Fields_FWDDECL)
#define IL2CPP_STRUCT_FoxArmor__Fields_FWDDECL
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_FoxArmor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxArmor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FoxArmor__Fields_FWDDECL)
#include <Modloader/app/structs/FoxArmor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxArmor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
