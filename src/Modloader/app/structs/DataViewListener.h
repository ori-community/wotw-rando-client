#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewListener_DEFINED)
#include <Modloader/app/structs/DataViewListener__Fields.h>
#if defined(IL2CPP_STRUCT_DataViewListener__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewListener_DEFINED
struct DataViewListener__Class;
struct DataViewListener {
    struct DataViewListener__Class* klass;
    MonitorData* monitor;
    struct DataViewListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewListener_FWDDECL)
#define IL2CPP_STRUCT_DataViewListener_FWDDECL
#include <Modloader/app/structs/DataViewListener__Class.h>
#endif
#undef IL2CPP_STRUCT_DataViewListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewListener_DEFINED) && !defined(IL2CPP_STRUCT_DataViewListener_FWDDECL)
#include <Modloader/app/structs/DataViewListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
