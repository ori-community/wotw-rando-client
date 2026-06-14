#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindPipeZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindPipeZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindPipeZone__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WindPipeZone__Fields_DEFINED
struct Damage;
struct WindPipeZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 PushDirection;
    float PushForce;
    DamageLayerMask__Enum m_pushLayerMask;

    struct Damage* m_Damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindPipeZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindPipeZone__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#endif
#undef IL2CPP_STRUCT_WindPipeZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindPipeZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindPipeZone__Fields_FWDDECL)
#include <Modloader/app/structs/WindPipeZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindPipeZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
