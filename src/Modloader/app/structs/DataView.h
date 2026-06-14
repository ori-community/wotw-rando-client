#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataView_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView_DEFINED)
#include <Modloader/app/structs/DataView__Fields.h>
#if defined(IL2CPP_STRUCT_DataView__Fields_DEFINED)
#define IL2CPP_STRUCT_DataView_DEFINED
struct DataView__Class;
struct DataView {
    struct DataView__Class* klass;
    MonitorData* monitor;
    struct DataView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataView_FWDDECL)
#define IL2CPP_STRUCT_DataView_FWDDECL
#include <Modloader/app/structs/DataView__Class.h>
#endif
#undef IL2CPP_STRUCT_DataView_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView_DEFINED) && !defined(IL2CPP_STRUCT_DataView_FWDDECL)
#include <Modloader/app/structs/DataView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
