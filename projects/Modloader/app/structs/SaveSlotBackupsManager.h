#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_DEFINED)
#include <Modloader/app/structs/SaveSlotBackupsManager__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_DEFINED
struct SaveSlotBackupsManager__Class;
struct SaveSlotBackupsManager {
    struct SaveSlotBackupsManager__Class* klass;
    MonitorData* monitor;
    struct SaveSlotBackupsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_FWDDECL
#include <Modloader/app/structs/SaveSlotBackupsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
