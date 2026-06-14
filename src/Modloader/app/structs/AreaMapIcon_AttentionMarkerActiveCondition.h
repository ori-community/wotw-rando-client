#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_DEFINED)
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#if defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED)
#define IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_DEFINED
struct ConditionUberState;
struct AreaMapIcon_AttentionMarkerActiveCondition {
    GameWorldAreaID__Enum AreaID;

    struct ConditionUberState* Condition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIcon_AttentionMarkerActiveCondition_FWDDECL)
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
