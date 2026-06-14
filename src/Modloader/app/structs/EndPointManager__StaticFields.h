#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndPointManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndPointManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EndPointManager__StaticFields_DEFINED
struct Hashtable;
struct EndPointManager__StaticFields {
    struct Hashtable* ip_to_endpoints;
};
#endif
#if !defined(IL2CPP_STRUCT_EndPointManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EndPointManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_EndPointManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EndPointManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/EndPointManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndPointManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
