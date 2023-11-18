#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeepScenesLoaded__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeepScenesLoaded__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KeepScenesLoaded__Fields_DEFINED
struct SceneMetaData__Array;
struct MoonReference_1_ISerializedUberState_;
struct Condition_1;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct KeepScenesLoaded__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData__Array* Scenes;
    struct MoonReference_1_ISerializedUberState_* UberState;
    struct Condition_1* Condition;
    bool m_hasPreloaded;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeepScenesLoaded__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_ISerializedUberState_.h>
#include <Modloader/app/structs/SceneMetaData__Array.h>
#endif
#undef IL2CPP_STRUCT_KeepScenesLoaded__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeepScenesLoaded__Fields_FWDDECL)
#include <Modloader/app/structs/KeepScenesLoaded__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeepScenesLoaded__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
