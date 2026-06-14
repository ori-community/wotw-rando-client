#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager_DEFINED)
#include <Modloader/app/structs/SaveSlotsManager__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsManager_DEFINED
struct SaveSlotsManager__Class;
struct SaveSlotsManager {
    struct SaveSlotsManager__Class* klass;
    MonitorData* monitor;
    struct SaveSlotsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsManager_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsManager_FWDDECL
#include <Modloader/app/structs/SaveSlotsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsManager_FWDDECL)
#include <Modloader/app/structs/SaveSlotsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
