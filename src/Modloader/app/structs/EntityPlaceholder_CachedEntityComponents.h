#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_DEFINED
struct Locomotion;
struct PlatformMovement;
struct MoonReference_1_ILocomotionTurningHandler_;
struct IPooled__Array;
struct Component_1__Array;
struct Vitals;
struct Sensor;
struct EntityPlaceholderScalingData;
struct EntityPlaceholder_CachedEntityComponents {
    struct Locomotion* Locomotion;
    struct PlatformMovement* PlataformMovement;
    struct MoonReference_1_ILocomotionTurningHandler_* TurningHandler;
    struct IPooled__Array* Pooleds;
    struct Component_1__Array* PooledComponents;
    struct Vitals* Vitals;
    struct Sensor* Sensor;
    struct EntityPlaceholderScalingData* Scaling;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/IPooled__Array.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonReference_1_ILocomotionTurningHandler_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder_CachedEntityComponents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder_CachedEntityComponents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
