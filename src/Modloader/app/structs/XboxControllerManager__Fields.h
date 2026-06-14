#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_XboxControllerManager__Fields_DEFINED
struct XboxControllerManager__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 m_currentVibrationMagnitude;
    struct Vector2 m_setVibration;
    float m_remainingVibrationDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerManager__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_XboxControllerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerManager__Fields_FWDDECL)
#include <Modloader/app/structs/XboxControllerManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
