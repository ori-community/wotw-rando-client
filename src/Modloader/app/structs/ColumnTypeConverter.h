#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColumnTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColumnTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter_DEFINED)
#include <Modloader/app/structs/ColumnTypeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_ColumnTypeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_ColumnTypeConverter_DEFINED
struct ColumnTypeConverter__Class;
struct ColumnTypeConverter {
    struct ColumnTypeConverter__Class* klass;
    MonitorData* monitor;
    struct ColumnTypeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_ColumnTypeConverter_FWDDECL
#include <Modloader/app/structs/ColumnTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ColumnTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_ColumnTypeConverter_FWDDECL)
#include <Modloader/app/structs/ColumnTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColumnTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
