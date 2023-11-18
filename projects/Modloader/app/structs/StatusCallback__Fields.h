#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatusCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatusCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatusCallback__Fields_DEFINED)
#include <Modloader/app/structs/SwaggerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SwaggerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_StatusCallback__Fields_DEFINED
struct String;
struct StatusCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct String* Status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatusCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatusCallback__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StatusCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatusCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatusCallback__Fields_FWDDECL)
#include <Modloader/app/structs/StatusCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatusCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
