#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisibleOnWorldMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisibleOnWorldMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_WorldMapIconType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_VisibleOnWorldMap__Fields_DEFINED
struct Condition_1;
struct SerializedBooleanUberState;
struct ConditionUberState;
struct VisibleOnWorldMap__Fields {
    struct GuidOwner__Fields _;
    WorldMapIconType__Enum Icon;

    struct Vector2 Offset;
    bool RevealWhenOnScreen;
    struct Condition_1* RevealCondition;
    bool IsSecret;
    struct SerializedBooleanUberState* VisibilityOverrideUberState;
    struct ConditionUberState* VisibilityOverrideCondition;
    bool m_alwaysAddToAll;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_VisibleOnWorldMap__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_VisibleOnWorldMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VisibleOnWorldMap__Fields_FWDDECL)
#include <Modloader/app/structs/VisibleOnWorldMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisibleOnWorldMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
