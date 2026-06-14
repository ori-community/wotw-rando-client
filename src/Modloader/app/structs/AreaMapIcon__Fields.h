#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapIcon__Fields_DEFINED
struct GameObject;
struct AreaMapIcon_AttentionMarkerActiveCondition__Array;
struct MessageBox;
struct ConditionUberState;
struct AreaMapIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* MapIconActive;
    struct GameObject* MapIconSpecial;
    struct GameObject* MapIconInactive;
    struct GameObject* Label;
    struct GameObject* AttentionMarker;
    struct AreaMapIcon_AttentionMarkerActiveCondition__Array* AttentionMarkerActiveConditions;
    struct MessageBox* m_labelBox;
    struct GameObject* m_transparancyAnimatorContainer;
    struct ConditionUberState* AttentionMarkerState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIcon__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition__Array.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIcon__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
