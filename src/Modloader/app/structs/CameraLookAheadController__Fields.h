#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraLookAheadController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraLookAheadController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraLookAheadController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CameraLookAheadController__Fields_DEFINED
struct Rigidbody;
struct CameraLookAheadController__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody* Rigidbody;
    float XWeight;
    float YWeight;
    struct Vector2 MinOffset;
    struct Vector2 MaxOffset;
    float Speed;
    bool m_active;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraLookAheadController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraLookAheadController__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_CameraLookAheadController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraLookAheadController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraLookAheadController__Fields_FWDDECL)
#include <Modloader/app/structs/CameraLookAheadController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraLookAheadController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
