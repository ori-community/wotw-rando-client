#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpMethod__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpMethod__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpMethod__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HttpMethod__StaticFields_DEFINED
struct HttpMethod;
struct HttpMethod__StaticFields {
    struct HttpMethod* delete_method;
    struct HttpMethod* get_method;
    struct HttpMethod* head_method;
    struct HttpMethod* options_method;
    struct HttpMethod* post_method;
    struct HttpMethod* put_method;
    struct HttpMethod* trace_method;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpMethod__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HttpMethod__StaticFields_FWDDECL
#include <Modloader/app/structs/HttpMethod.h>
#endif
#undef IL2CPP_STRUCT_HttpMethod__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpMethod__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HttpMethod__StaticFields_FWDDECL)
#include <Modloader/app/structs/HttpMethod__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpMethod__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
