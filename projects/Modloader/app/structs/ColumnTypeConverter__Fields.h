#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColumnTypeConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColumnTypeConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_ColumnTypeConverter__Fields_DEFINED
struct TypeConverter_StandardValuesCollection;
struct __declspec(align(8)) ColumnTypeConverter__Fields {
    struct TypeConverter_StandardValuesCollection* _values;
};
#endif
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColumnTypeConverter__Fields_FWDDECL
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>
#endif
#undef IL2CPP_STRUCT_ColumnTypeConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColumnTypeConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColumnTypeConverter__Fields_FWDDECL)
#include <Modloader/app/structs/ColumnTypeConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColumnTypeConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
