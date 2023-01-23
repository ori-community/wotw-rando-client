#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimedTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyTimedTrigger__Fields_DEFINED
struct ActionMethod;
struct String;
struct Component_1;
struct LegacyTimedTrigger__Fields {
    struct SaveSerialize__Fields _;
    float Duration;
    bool Repeat;
    struct ActionMethod* Action;
    struct String* TriggerName;
    struct Component_1* Reciever;
    float StartTime;
    bool Paused;
    float m_time;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimedTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimedTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTimedTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimedTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
