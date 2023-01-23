#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveWithCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveWithCondition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoveWithCondition__Fields_DEFINED
struct Condition_1;
struct Transform;
struct MoveWithCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct Transform* Target;
    struct Vector3 Amount;
    float Duration;
    float SpeedSmoothingTime;
    bool InvertIfConditionNotMet;
    struct Vector3 m_startPos;
    struct Vector3 m_endPos;
    float m_ratio;
    float m_currentSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveWithCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveWithCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoveWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveWithCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveWithCondition__Fields_FWDDECL)
#include <Modloader/app/structs/MoveWithCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveWithCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
