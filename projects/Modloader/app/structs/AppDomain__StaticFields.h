#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomain__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomain__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AppDomain__StaticFields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Object_;
struct Object;
struct AppDomain;
struct AppDomain__StaticFields {
    struct String* _process_guid;
    struct Dictionary_2_System_String_System_Object_* type_resolve_in_progress;
    struct Dictionary_2_System_String_System_Object_* assembly_resolve_in_progress;
    struct Dictionary_2_System_String_System_Object_* assembly_resolve_in_progress_refonly;
    struct Object* _principal;
    struct AppDomain* default_domain;
};
#endif
#if !defined(IL2CPP_STRUCT_AppDomain__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AppDomain__StaticFields_FWDDECL
#include <Modloader/app/structs/AppDomain.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AppDomain__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AppDomain__StaticFields_FWDDECL)
#include <Modloader/app/structs/AppDomain__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomain__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
