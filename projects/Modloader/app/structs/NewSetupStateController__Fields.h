#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewSetupStateController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewSetupStateController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController__Fields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_NewSetupStateController__Fields_DEFINED
struct SetupControllerStateHolder;
struct NewSetupStateControllerResolver;
struct String;
struct NewSetupStateController_ChangeModel;
struct Int32__Array;
struct IUberState__Array;
struct NewSetupStateController__Fields {
    struct MonoBehaviour__Fields _;
    struct SetupControllerStateHolder* StateHolder;
    struct NewSetupStateControllerResolver* m_dataResolver;
    struct String* m_guidStr;
    struct Guid m_guid;
    struct NewSetupStateController_ChangeModel* m_changeModel;
    int32_t m_activeStateIndex;
    struct Int32__Array* m_allStateGuids;
    struct Nullable_1_Int32_ m_currentPassiveStateApplied;
    struct IUberState__Array* m_affectingUberStates;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewSetupStateController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewSetupStateController__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver.h>
#include <Modloader/app/structs/NewSetupStateController_ChangeModel.h>
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NewSetupStateController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewSetupStateController__Fields_FWDDECL)
#include <Modloader/app/structs/NewSetupStateController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewSetupStateController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
