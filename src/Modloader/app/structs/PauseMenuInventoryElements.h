#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseMenuInventoryElements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_DEFINED)
#include <Modloader/app/structs/PauseMenuInventoryElements__Fields.h>
#if defined(IL2CPP_STRUCT_PauseMenuInventoryElements__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_DEFINED
struct PauseMenuInventoryElements__Class;
struct PauseMenuInventoryElements {
    struct PauseMenuInventoryElements__Class* klass;
    MonitorData* monitor;
    struct PauseMenuInventoryElements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_FWDDECL)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_FWDDECL
#include <Modloader/app/structs/PauseMenuInventoryElements__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseMenuInventoryElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_DEFINED) && !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_FWDDECL)
#include <Modloader/app/structs/PauseMenuInventoryElements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseMenuInventoryElements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
