#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy_DEFINED)
#include <Modloader/app/structs/JsonSerializerProxy__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerProxy_DEFINED
struct JsonSerializerProxy__Class;
struct JsonSerializerProxy {
    struct JsonSerializerProxy__Class* klass;
    MonitorData* monitor;
    struct JsonSerializerProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerProxy_FWDDECL
#include <Modloader/app/structs/JsonSerializerProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerProxy_FWDDECL)
#include <Modloader/app/structs/JsonSerializerProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
