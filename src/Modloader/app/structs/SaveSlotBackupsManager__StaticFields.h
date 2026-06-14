#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_DEFINED
struct SaveSlotBackupsManager;
struct Action_1_Int32_;
struct SaveSlotBackupsManager__StaticFields {
    bool BulkLoadBackupsOnXbox;
    bool ParseBackupsOnMainthread;
    float TIME_BETWEEN_SAVES;
    struct SaveSlotBackupsManager* m_instance;
    struct Action_1_Int32_* OnFinishedReadingBackups;
    int32_t LastBackupType;
    bool DisableJustLoadedDelay;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/SaveSlotBackupsManager.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupsManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupsManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
