#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataBundleEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataBundleEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBundleEntry_DEFINED)
#include <Modloader/app/structs/DataBundleEntry__Fields.h>
#if defined(IL2CPP_STRUCT_DataBundleEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_DataBundleEntry_DEFINED
struct DataBundleEntry__Class;
struct DataBundleEntry {
    struct DataBundleEntry__Class* klass;
    MonitorData* monitor;
    struct DataBundleEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataBundleEntry_FWDDECL)
#define IL2CPP_STRUCT_DataBundleEntry_FWDDECL
#include <Modloader/app/structs/DataBundleEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_DataBundleEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBundleEntry_DEFINED) && !defined(IL2CPP_STRUCT_DataBundleEntry_FWDDECL)
#include <Modloader/app/structs/DataBundleEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataBundleEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
