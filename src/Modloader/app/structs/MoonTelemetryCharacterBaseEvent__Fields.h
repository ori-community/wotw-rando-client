#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED
struct String;
struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_;
struct MoonTelemetryCharacterBaseEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    bool WasDebugUsed;
    struct String* SaveGameID;
    int32_t LifeID;
    float LocationX;
    float LocationY;
    int32_t MapArea;
    struct String* SceneName;
    int32_t GameTime;
    int32_t Difficulty;
    struct String* TrackedQuest;
    float LifeCurrent;
    float LifeCap;
    float EnergyCurrent;
    float EnergyCap;
    int32_t SpiritLightBalance;
    int32_t SpiritLightCollected;
    int32_t ShardSlotsMax;
    int32_t AbilitySlotX;
    int32_t AbilitySlotY;
    int32_t AbilitySlotB;
    struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_* m_fieldInfos;
    struct Vector2 _LastScreenPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
