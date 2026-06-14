#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseScreenSaveSlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseScreenSaveSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreenSaveSlot_DEFINED)
#include <Modloader/app/structs/PauseScreenSaveSlot__Fields.h>
#if defined(IL2CPP_STRUCT_PauseScreenSaveSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseScreenSaveSlot_DEFINED
struct PauseScreenSaveSlot__Class;
struct PauseScreenSaveSlot {
    struct PauseScreenSaveSlot__Class* klass;
    MonitorData* monitor;
    struct PauseScreenSaveSlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseScreenSaveSlot_FWDDECL)
#define IL2CPP_STRUCT_PauseScreenSaveSlot_FWDDECL
#include <Modloader/app/structs/PauseScreenSaveSlot__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseScreenSaveSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreenSaveSlot_DEFINED) && !defined(IL2CPP_STRUCT_PauseScreenSaveSlot_FWDDECL)
#include <Modloader/app/structs/PauseScreenSaveSlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseScreenSaveSlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
