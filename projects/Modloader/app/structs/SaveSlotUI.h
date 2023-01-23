#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI_DEFINED)
#include <Modloader/app/structs/SaveSlotUI__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotUI__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotUI_DEFINED
struct SaveSlotUI__Class;
struct SaveSlotUI {
    struct SaveSlotUI__Class* klass;
    MonitorData* monitor;
    struct SaveSlotUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotUI_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotUI_FWDDECL
#include <Modloader/app/structs/SaveSlotUI__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotUI_FWDDECL)
#include <Modloader/app/structs/SaveSlotUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
