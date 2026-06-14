#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetMetaManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetMetaManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager_DEFINED)
#include <Modloader/app/structs/UberPresetMetaManager__Fields.h>
#if defined(IL2CPP_STRUCT_UberPresetMetaManager__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetMetaManager_DEFINED
struct UberPresetMetaManager__Class;
struct UberPresetMetaManager {
    struct UberPresetMetaManager__Class* klass;
    MonitorData* monitor;
    struct UberPresetMetaManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager_FWDDECL)
#define IL2CPP_STRUCT_UberPresetMetaManager_FWDDECL
#include <Modloader/app/structs/UberPresetMetaManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPresetMetaManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetMetaManager_FWDDECL)
#include <Modloader/app/structs/UberPresetMetaManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetMetaManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
