#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager__Fields_DEFINED)
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_UpdateManager__Fields_DEFINED
struct List_1_Moon_Driver_UpdateManager_Entry_;
struct Queue_1_Moon_Driver_UpdateManager_Entry_;
struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_;
struct UpdateManager__Array;
struct __declspec(align(8)) UpdateManager__Fields {
    UpdateType__Enum UpdateType;

    struct List_1_Moon_Driver_UpdateManager_Entry_* m_activeEntries;
    struct Queue_1_Moon_Driver_UpdateManager_Entry_* m_registrationQueue;
    struct Queue_1_Moon_Driver_UpdateManager_Entry_* m_deregistrationQueue;
    struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_* m_entryByHandler;
    struct UpdateManager__Array* m_managers;
    int32_t m_updateCounter;
    bool _EnableProfiling_k__BackingField;
    bool m_newEntriesToBeAdded;
    struct List_1_Moon_Driver_UpdateManager_Entry_* m_entriesToUpdate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/List_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/UpdateManager__Array.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
