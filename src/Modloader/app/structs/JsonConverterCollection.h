#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonConverterCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonConverterCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverterCollection_DEFINED)
#include <Modloader/app/structs/JsonConverterCollection__Fields.h>
#if defined(IL2CPP_STRUCT_JsonConverterCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonConverterCollection_DEFINED
struct JsonConverterCollection__Class;
struct JsonConverterCollection {
    struct JsonConverterCollection__Class* klass;
    MonitorData* monitor;
    struct JsonConverterCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonConverterCollection_FWDDECL)
#define IL2CPP_STRUCT_JsonConverterCollection_FWDDECL
#include <Modloader/app/structs/JsonConverterCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonConverterCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverterCollection_DEFINED) && !defined(IL2CPP_STRUCT_JsonConverterCollection_FWDDECL)
#include <Modloader/app/structs/JsonConverterCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonConverterCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
