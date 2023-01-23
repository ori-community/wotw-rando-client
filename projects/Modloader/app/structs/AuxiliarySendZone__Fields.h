#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuxiliarySendZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuxiliarySendZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone__Fields_DEFINED)
#include <Modloader/app/structs/AudioEmitterZone__Fields.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_AuxiliarySendZone__Fields_DEFINED
struct Condition_1;
struct AuxBus;
struct String;
struct AuxiliarySendZone__Fields {
    struct AudioEmitterZone__Fields _;
    bool InnerMaxValueZone;
    struct Vector2 MaxValueZone;
    float SendMultiplier;
    struct Condition_1* ConditionToTrigger;
    struct AuxBus* Bus;
    struct String* OverrideBusName;
    struct Bounds m_maxValueZoneBounds;
    uint32_t m_busID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_AuxiliarySendZone__Fields_FWDDECL
#include <Modloader/app/structs/AuxBus.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AuxiliarySendZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AuxiliarySendZone__Fields_FWDDECL)
#include <Modloader/app/structs/AuxiliarySendZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuxiliarySendZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
