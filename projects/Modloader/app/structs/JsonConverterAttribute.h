#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonConverterAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonConverterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverterAttribute_DEFINED)
#include <Modloader/app/structs/JsonConverterAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonConverterAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonConverterAttribute_DEFINED
struct JsonConverterAttribute__Class;
struct JsonConverterAttribute {
    struct JsonConverterAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonConverterAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonConverterAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonConverterAttribute_FWDDECL
#include <Modloader/app/structs/JsonConverterAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonConverterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverterAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonConverterAttribute_FWDDECL)
#include <Modloader/app/structs/JsonConverterAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonConverterAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
