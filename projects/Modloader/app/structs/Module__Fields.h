#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Module__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Module__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Module__Fields_DEFINED)
#define IL2CPP_STRUCT_Module__Fields_DEFINED
struct Assembly;
struct String;
struct __declspec(align(8)) Module__Fields {
    void* _impl;
    struct Assembly* assembly;
    struct String* fqname;
    struct String* name;
    struct String* scopename;
    bool is_resource;
    int32_t token;
};
#endif
#if !defined(IL2CPP_STRUCT_Module__Fields_FWDDECL)
#define IL2CPP_STRUCT_Module__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Module__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Module__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Module__Fields_FWDDECL)
#include <Modloader/app/structs/Module__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Module__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
