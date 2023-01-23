#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_DEFINED
struct Sensor;
struct List_1_DamageType_;
struct DynamicDataResolver;
struct MortarSpitAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct Sensor* EntitySensor;
    struct List_1_DamageType_* m_damageToIgnore;
    float m_hideDistance;
    float m_minHideTime;
    float m_preWindupWaitTime;
    float Gravity;
    float Damage;
    DamageWeight__Enum DamageWeight;

    DamageLayerMask__Enum DamageLayerMask;

    float MinSpitRange;
    float MaxSpitRange;
    float FlightTimeForMinRange;
    float FlightTimeIncreasePerUnitDistance;
    float FlightTimeHandicap;
    struct LayerMask HitTestLayerMask;
    float MinAirTime;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarSpitAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MortarSpitAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarSpitAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
