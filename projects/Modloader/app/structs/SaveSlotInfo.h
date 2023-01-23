#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotInfo_DEFINED)
#include <Modloader/app/structs/SaveSlotInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotInfo_DEFINED
struct SaveSlotInfo__Class;
struct SaveSlotInfo {
    struct SaveSlotInfo__Class* klass;
    MonitorData* monitor;
    struct SaveSlotInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotInfo_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotInfo_FWDDECL
#include <Modloader/app/structs/SaveSlotInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotInfo_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotInfo_FWDDECL)
#include <Modloader/app/structs/SaveSlotInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
