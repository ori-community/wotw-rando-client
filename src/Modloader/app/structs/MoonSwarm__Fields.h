#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonSwarm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm__Fields_DEFINED)
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MoonSwarm_DebugSettings.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_MoonSwarm_DebugSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonSwarm__Fields_DEFINED
struct UberSwarmerSettings;
struct GameObject;
struct List_1_MoonSwarmer_;
struct List_1_UnityEngine_Transform_;
struct MoonSwarm__Fields {
    struct MonoBehaviour__Fields _;
    struct UberSwarmerSettings* Settings;
    struct GameObject* Prefab;
    struct GameObject* TrailPrefab;
    int32_t Amount;
    struct FloatRange_1 SizeRange;
    bool LimitPosition;
    struct Rect Limit;
    float LimitRectBorder;
    struct MoonSwarm_DebugSettings DebugOptions;
    struct List_1_MoonSwarmer_* m_swarmers;
    struct List_1_UnityEngine_Transform_* m_swarmersTransforms;
    SuspendableMask__Enum m_suspensionMask;

    struct Rect m_worldSpaceLimit;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonSwarm__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonSwarm__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_MoonSwarmer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/UberSwarmerSettings.h>
#endif
#undef IL2CPP_STRUCT_MoonSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonSwarm__Fields_FWDDECL)
#include <Modloader/app/structs/MoonSwarm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonSwarm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
