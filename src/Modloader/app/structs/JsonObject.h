#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObject_DEFINED)
#include <Modloader/app/structs/JsonObject__Fields.h>
#if defined(IL2CPP_STRUCT_JsonObject__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonObject_DEFINED
struct JsonObject__Class;
struct JsonObject {
    struct JsonObject__Class* klass;
    MonitorData* monitor;
    struct JsonObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonObject_FWDDECL)
#define IL2CPP_STRUCT_JsonObject_FWDDECL
#include <Modloader/app/structs/JsonObject__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObject_DEFINED) && !defined(IL2CPP_STRUCT_JsonObject_FWDDECL)
#include <Modloader/app/structs/JsonObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
