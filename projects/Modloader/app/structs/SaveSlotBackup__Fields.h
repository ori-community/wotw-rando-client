#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackup__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackup__Fields_DEFINED
struct SaveSlotBackupInfo__Array;
struct __declspec(align(8)) SaveSlotBackup__Fields {
    int32_t Index;
    int32_t Count;
    bool IsLoaded;
    bool IsLoading;
    struct SaveSlotBackupInfo__Array* SaveSlotInfos;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackup__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackup__Fields_FWDDECL
#include <Modloader/app/structs/SaveSlotBackupInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackup__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
