#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_DEFINED)
#define IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_DEFINED
enum class ChaperoneCalibrationState__Enum : int32_t {
    OK = 0x00000001,
    Warning = 0x00000064,
    Warning_BaseStationMayHaveMoved = 0x00000065,
    Warning_BaseStationRemoved = 0x00000066,
    Warning_SeatedBoundsInvalid = 0x00000067,
    Error = 0x000000c8,
    Error_BaseStationUninitialized = 0x000000c9,
    Error_BaseStationConflict = 0x000000ca,
    Error_PlayAreaInvalid = 0x000000cb,
    Error_CollisionBoundsInvalid = 0x000000cc,
};
#endif
#if !defined(IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_FWDDECL)
#define IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ChaperoneCalibrationState__Enum_FWDDECL)
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
