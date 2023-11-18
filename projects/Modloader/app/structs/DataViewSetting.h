#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSetting_DEFINED)
#include <Modloader/app/structs/DataViewSetting__Fields.h>
#if defined(IL2CPP_STRUCT_DataViewSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewSetting_DEFINED
struct DataViewSetting__Class;
struct DataViewSetting {
    struct DataViewSetting__Class* klass;
    MonitorData* monitor;
    struct DataViewSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewSetting_FWDDECL)
#define IL2CPP_STRUCT_DataViewSetting_FWDDECL
#include <Modloader/app/structs/DataViewSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DataViewSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSetting_DEFINED) && !defined(IL2CPP_STRUCT_DataViewSetting_FWDDECL)
#include <Modloader/app/structs/DataViewSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
