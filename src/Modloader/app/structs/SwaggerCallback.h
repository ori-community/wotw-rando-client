#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwaggerCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwaggerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwaggerCallback_DEFINED)
#include <Modloader/app/structs/SwaggerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SwaggerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_SwaggerCallback_DEFINED
struct SwaggerCallback__Class;
struct SwaggerCallback {
    struct SwaggerCallback__Class* klass;
    MonitorData* monitor;
    struct SwaggerCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwaggerCallback_FWDDECL)
#define IL2CPP_STRUCT_SwaggerCallback_FWDDECL
#include <Modloader/app/structs/SwaggerCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_SwaggerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwaggerCallback_DEFINED) && !defined(IL2CPP_STRUCT_SwaggerCallback_FWDDECL)
#include <Modloader/app/structs/SwaggerCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwaggerCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
