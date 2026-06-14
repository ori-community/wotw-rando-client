#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowView_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowView_DEFINED)
#include <Modloader/app/structs/DataRowView__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowView__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowView_DEFINED
struct DataRowView__Class;
struct DataRowView {
    struct DataRowView__Class* klass;
    MonitorData* monitor;
    struct DataRowView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowView_FWDDECL)
#define IL2CPP_STRUCT_DataRowView_FWDDECL
#include <Modloader/app/structs/DataRowView__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowView_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowView_DEFINED) && !defined(IL2CPP_STRUCT_DataRowView_FWDDECL)
#include <Modloader/app/structs/DataRowView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
