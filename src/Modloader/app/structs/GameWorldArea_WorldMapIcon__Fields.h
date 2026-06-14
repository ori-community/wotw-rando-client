#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>
#if defined(IL2CPP_STRUCT_WorldMapIconType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_DEFINED
struct SerializedIntUberState;
struct MoonGuid;
struct SerializedBooleanUberState;
struct ConditionUberState;
struct __declspec(align(8)) GameWorldArea_WorldMapIcon__Fields {
    struct SerializedIntUberState* SpecialState;
    struct MoonGuid* Guid;
    WorldMapIconType__Enum Icon;

    struct Vector2 Position;
    bool IsSecret;
    struct SerializedBooleanUberState* State;
    struct ConditionUberState* Condition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameWorldArea_WorldMapIcon__Fields_FWDDECL)
#include <Modloader/app/structs/GameWorldArea_WorldMapIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorldArea_WorldMapIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
