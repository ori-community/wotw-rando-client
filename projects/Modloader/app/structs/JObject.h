#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_JObject_DEFINED)
#include <Modloader/app/structs/JObject__Fields.h>
#if defined(IL2CPP_STRUCT_JObject__Fields_DEFINED)
#define IL2CPP_STRUCT_JObject_DEFINED
struct JObject__Class;
struct JObject {
    struct JObject__Class* klass;
    MonitorData* monitor;
    struct JObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JObject_FWDDECL)
#define IL2CPP_STRUCT_JObject_FWDDECL
#include <Modloader/app/structs/JObject__Class.h>
#endif
#undef IL2CPP_STRUCT_JObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_JObject_DEFINED) && !defined(IL2CPP_STRUCT_JObject_FWDDECL)
#include <Modloader/app/structs/JObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
