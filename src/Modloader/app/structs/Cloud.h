#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cloud_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cloud_DEFINED)
#include <Modloader/app/structs/Cloud__Fields.h>
#if defined(IL2CPP_STRUCT_Cloud__Fields_DEFINED)
#define IL2CPP_STRUCT_Cloud_DEFINED
struct Cloud__Class;
struct Cloud {
    struct Cloud__Class* klass;
    MonitorData* monitor;
    struct Cloud__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cloud_FWDDECL)
#define IL2CPP_STRUCT_Cloud_FWDDECL
#include <Modloader/app/structs/Cloud__Class.h>
#endif
#undef IL2CPP_STRUCT_Cloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cloud_DEFINED) && !defined(IL2CPP_STRUCT_Cloud_FWDDECL)
#include <Modloader/app/structs/Cloud.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cloud.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
