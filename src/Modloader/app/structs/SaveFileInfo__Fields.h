#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveFileInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveFileInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveFileInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) SaveFileInfo__Fields {
    struct String* m_folderPath;
    struct String* m_fileName;
    struct String* m_backupFileName;
    int32_t m_slotIndex;
    int32_t m_backupSlotIndex;
    struct String* m_FullSaveFilePath;
    struct String* m_FullBackupSaveFilePath;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveFileInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveFileInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SaveFileInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveFileInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SaveFileInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveFileInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
