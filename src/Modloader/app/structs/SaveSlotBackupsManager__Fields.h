#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_DEFINED
struct List_1_SaveSlotBackupsManager_BackupParseQueue_;
struct Byte__Array;
struct String;
struct Stack_1_System_Int32__1;
struct List_1_SaveSlotBackup_;
struct SaveSlotBackupsManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_SaveSlotBackupsManager_BackupParseQueue_* m_backupParseQueue;
    struct Byte__Array* m_backupBytes;
    struct String* m_backupName;
    struct Stack_1_System_Int32__1* m_buffersToDelete;
    bool m_createBackupPending;
    int32_t m_currentReadingSlot;
    int32_t m_currentReadingBackup;
    float m_lastSaveTime;
    float m_gameJustLoadedDelay;
    struct List_1_SaveSlotBackup_* m_saveSlotBackups;
    int32_t m_busyGrace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/List_1_SaveSlotBackup_.h>
#include <Modloader/app/structs/List_1_SaveSlotBackupsManager_BackupParseQueue_.h>
#include <Modloader/app/structs/Stack_1_System_Int32__1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupsManager__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupsManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupsManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
