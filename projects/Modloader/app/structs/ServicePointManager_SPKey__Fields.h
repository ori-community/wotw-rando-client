#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_DEFINED)
#define IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_DEFINED
struct Uri;
struct __declspec(align(8)) ServicePointManager_SPKey__Fields {
    struct Uri* uri;
    struct Uri* proxy;
    bool use_connect;
};
#endif
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_FWDDECL
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_FWDDECL)
#include <Modloader/app/structs/ServicePointManager_SPKey__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePointManager_SPKey__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
