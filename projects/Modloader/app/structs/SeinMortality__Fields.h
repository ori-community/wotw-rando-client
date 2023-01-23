#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMortality__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMortality__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMortality__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMortality__Fields_DEFINED
struct SeinDamageReciever;
struct SeinHealthController;
struct CapsuleCrushDetector;
struct ZonesProperties;
struct SeinPetrifiedFogController;
struct SeinDeadlyDarknessController;
struct __declspec(align(8)) SeinMortality__Fields {
    struct SeinDamageReciever* DamageReciever;
    struct SeinHealthController* Health;
    struct CapsuleCrushDetector* CrushDetector;
    struct ZonesProperties* ZonesProperties;
    struct SeinPetrifiedFogController* SeinPetrifiedFogController;
    struct SeinDeadlyDarknessController* SeinDeadlyDarknessController;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinMortality__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinMortality__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCrushDetector.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/SeinDeadlyDarknessController.h>
#include <Modloader/app/structs/SeinHealthController.h>
#include <Modloader/app/structs/SeinPetrifiedFogController.h>
#include <Modloader/app/structs/ZonesProperties.h>
#endif
#undef IL2CPP_STRUCT_SeinMortality__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMortality__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinMortality__Fields_FWDDECL)
#include <Modloader/app/structs/SeinMortality__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMortality__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
