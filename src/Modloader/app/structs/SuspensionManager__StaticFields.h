#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspensionManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspensionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager__StaticFields_DEFINED)
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SuspensionManager__StaticFields_DEFINED
struct List_1_Moon_SuspensionManager_SuspensionTicket_;
struct Dictionary_2_Moon_ISuspendable_System_Int32_;
struct HashSet_1_Moon_ISuspendable_;
struct List_1_Moon_ISuspendable_;
struct SuspensionManager__StaticFields {
    SuspendableMask__Enum GameplayMask;

    SuspendableMask__Enum AllMask;

    int32_t InvalidTicketID;
    struct List_1_Moon_SuspensionManager_SuspensionTicket_* s_suspensionTickets;
    SuspendableMask__Enum s_currentSuspensionMask;

    int32_t s_idGenerator;
    struct Dictionary_2_Moon_ISuspendable_System_Int32_* s_suspendables;
    struct HashSet_1_Moon_ISuspendable_* s_suspendablesIterate;
    struct List_1_Moon_ISuspendable_* s_suspenableList;
    struct List_1_Moon_ISuspendable_* s_suspendRemove;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspensionManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SuspensionManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_ISuspendable_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_SuspensionManager_SuspensionTicket_.h>
#endif
#undef IL2CPP_STRUCT_SuspensionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SuspensionManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SuspensionManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspensionManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
