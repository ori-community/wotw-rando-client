#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRtpcFeed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRtpcFeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRtpcFeed_DEFINED)
#define IL2CPP_STRUCT_IRtpcFeed_DEFINED
struct IRtpcFeed__Class;
struct IRtpcFeed {
    struct IRtpcFeed__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRtpcFeed_FWDDECL)
#define IL2CPP_STRUCT_IRtpcFeed_FWDDECL
#include <Modloader/app/structs/IRtpcFeed__Class.h>
#endif
#undef IL2CPP_STRUCT_IRtpcFeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRtpcFeed_DEFINED) && !defined(IL2CPP_STRUCT_IRtpcFeed_FWDDECL)
#include <Modloader/app/structs/IRtpcFeed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRtpcFeed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
