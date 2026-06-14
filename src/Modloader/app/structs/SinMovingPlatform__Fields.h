#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovingPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovingPlatform__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Utility_MoveDirection__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Utility_MoveDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SinMovingPlatform__Fields_DEFINED
struct SoundSource;
struct SinMovingPlatform__Fields {
    struct SaveSerialize__Fields _;
    Utility_MoveDirection__Enum Direction;

    bool DontMoveWhenDeactivatedInitially;
    float Offset;
    float Period;
    float Range;
    struct SoundSource* UpSound;
    struct SoundSource* DownSound;
    int32_t m_previousSign;
    struct Vector3 m_positionCenter;
    float m_time;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinMovingPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_SinMovingPlatform__Fields_FWDDECL
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SinMovingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovingPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SinMovingPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/SinMovingPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovingPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
