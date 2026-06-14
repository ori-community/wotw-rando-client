#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedActionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedActionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DelayedActionManager__Fields_DEFINED
struct Action;
struct DelayedActionManager__Fields {
    struct MonoBehaviour__Fields _;
    SuspendableMask__Enum m_suspensionMask;

    bool _IsSuspended_k__BackingField;
    struct Action* FixedUpdateEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedActionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedActionManager__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_DelayedActionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedActionManager__Fields_FWDDECL)
#include <Modloader/app/structs/DelayedActionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedActionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
