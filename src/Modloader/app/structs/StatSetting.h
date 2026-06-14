#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_DEFINED)
#include <Modloader/app/structs/StatSetting__Fields.h>
#if defined(IL2CPP_STRUCT_StatSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_StatSetting_DEFINED
struct StatSetting__Class;
struct StatSetting {
    struct StatSetting__Class* klass;
    MonitorData* monitor;
    struct StatSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSetting_FWDDECL)
#define IL2CPP_STRUCT_StatSetting_FWDDECL
#include <Modloader/app/structs/StatSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_StatSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_DEFINED) && !defined(IL2CPP_STRUCT_StatSetting_FWDDECL)
#include <Modloader/app/structs/StatSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
