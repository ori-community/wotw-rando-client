#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_DEFINED
struct List_1_SystemIntegration_IUpdateable_;
struct Queue_1_System_Action_;
struct SystemIntegrationMainThreadRunner__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_SystemIntegration_IUpdateable_* m_updateable;
    struct Queue_1_System_Action_* m_queue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_FWDDECL)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SystemIntegration_IUpdateable_.h>
#include <Modloader/app/structs/Queue_1_System_Action_.h>
#endif
#undef IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_FWDDECL)
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
