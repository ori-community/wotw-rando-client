#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArray_DEFINED)
#include <Modloader/app/structs/JsonArray__Fields.h>
#if defined(IL2CPP_STRUCT_JsonArray__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonArray_DEFINED
struct JsonArray__Class;
struct JsonArray {
    struct JsonArray__Class* klass;
    MonitorData* monitor;
    struct JsonArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonArray_FWDDECL)
#define IL2CPP_STRUCT_JsonArray_FWDDECL
#include <Modloader/app/structs/JsonArray__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArray_DEFINED) && !defined(IL2CPP_STRUCT_JsonArray_FWDDECL)
#include <Modloader/app/structs/JsonArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
