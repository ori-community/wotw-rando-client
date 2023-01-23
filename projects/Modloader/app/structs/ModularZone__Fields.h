#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModularZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModularZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZone__Fields_DEFINED)
#include <Modloader/app/structs/ModularZone_Target__Enum.h>
#include <Modloader/app/structs/RectangleGameplayZone__Fields.h>
#if defined(IL2CPP_STRUCT_RectangleGameplayZone__Fields_DEFINED) && defined(IL2CPP_STRUCT_ModularZone_Target__Enum_DEFINED)
#define IL2CPP_STRUCT_ModularZone__Fields_DEFINED
struct WeightController;
struct List_1_Moon_MoonReference_1__11;
struct IModularZoneModifier__Array;
struct List_1_ICondition_;
struct ModularZone__Fields {
    struct RectangleGameplayZone__Fields _;
    ModularZone_Target__Enum TargetMode;

    struct WeightController* FadeController;
    struct List_1_Moon_MoonReference_1__11* Conditions;
    bool ConditionsPassedEditor;
    struct IModularZoneModifier__Array* m_modifiers;
    float _TimeSinceLastActive_k__BackingField;
    int32_t m_lateEditorRefreshFrame;
    struct List_1_ICondition_* m_resolvedConditions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModularZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModularZone__Fields_FWDDECL
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#include <Modloader/app/structs/List_1_ICondition_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__11.h>
#include <Modloader/app/structs/WeightController.h>
#endif
#undef IL2CPP_STRUCT_ModularZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModularZone__Fields_FWDDECL)
#include <Modloader/app/structs/ModularZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModularZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
