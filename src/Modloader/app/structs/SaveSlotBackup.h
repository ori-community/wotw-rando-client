#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackup_DEFINED)
#include <Modloader/app/structs/SaveSlotBackup__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotBackup__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackup_DEFINED
struct SaveSlotBackup__Class;
struct SaveSlotBackup {
    struct SaveSlotBackup__Class* klass;
    MonitorData* monitor;
    struct SaveSlotBackup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackup_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackup_FWDDECL
#include <Modloader/app/structs/SaveSlotBackup__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackup_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackup_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
