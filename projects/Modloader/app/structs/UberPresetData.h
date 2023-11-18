#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetData_DEFINED)
#include <Modloader/app/structs/UberPresetData__Fields.h>
#if defined(IL2CPP_STRUCT_UberPresetData__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetData_DEFINED
struct UberPresetData__Class;
struct UberPresetData {
    struct UberPresetData__Class* klass;
    MonitorData* monitor;
    struct UberPresetData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetData_FWDDECL)
#define IL2CPP_STRUCT_UberPresetData_FWDDECL
#include <Modloader/app/structs/UberPresetData__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPresetData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetData_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetData_FWDDECL)
#include <Modloader/app/structs/UberPresetData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
