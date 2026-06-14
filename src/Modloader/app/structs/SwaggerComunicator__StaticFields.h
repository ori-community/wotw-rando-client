#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwaggerComunicator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwaggerComunicator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwaggerComunicator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SwaggerComunicator__StaticFields_DEFINED
struct String;
struct SwaggerComunicator;
struct SwaggerComunicator__StaticFields {
    struct String* s_webServerUrl;
    struct String* s_webServerUrlHttps;
    bool UseHttps;
    struct SwaggerComunicator* s_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_SwaggerComunicator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SwaggerComunicator__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SwaggerComunicator.h>
#endif
#undef IL2CPP_STRUCT_SwaggerComunicator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwaggerComunicator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SwaggerComunicator__StaticFields_FWDDECL)
#include <Modloader/app/structs/SwaggerComunicator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwaggerComunicator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
