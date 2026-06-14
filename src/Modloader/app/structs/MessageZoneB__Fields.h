#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageZoneB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageZoneB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageZoneB__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MessageZoneB__Fields_DEFINED
struct MessageProvider;
struct Condition_1;
struct MessageBox;
struct Transform;
struct MessageZoneB__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* HintMessage;
    float Duration;
    struct Condition_1* Condition;
    struct MessageBox* m_messageBox;
    struct Transform* m_transform;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageZoneB__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageZoneB__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MessageZoneB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageZoneB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageZoneB__Fields_FWDDECL)
#include <Modloader/app/structs/MessageZoneB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageZoneB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
