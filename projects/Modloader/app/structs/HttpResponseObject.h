#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpResponseObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpResponseObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseObject_DEFINED)
#include <Modloader/app/structs/HttpResponseObject__Fields.h>
#if defined(IL2CPP_STRUCT_HttpResponseObject__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpResponseObject_DEFINED
struct HttpResponseObject__Class;
struct HttpResponseObject {
    struct HttpResponseObject__Class* klass;
    MonitorData* monitor;
    struct HttpResponseObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpResponseObject_FWDDECL)
#define IL2CPP_STRUCT_HttpResponseObject_FWDDECL
#include <Modloader/app/structs/HttpResponseObject__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpResponseObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseObject_DEFINED) && !defined(IL2CPP_STRUCT_HttpResponseObject_FWDDECL)
#include <Modloader/app/structs/HttpResponseObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpResponseObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
