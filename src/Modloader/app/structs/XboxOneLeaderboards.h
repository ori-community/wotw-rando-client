#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneLeaderboards_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneLeaderboards_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneLeaderboards_DEFINED)
#define IL2CPP_STRUCT_XboxOneLeaderboards_DEFINED
struct XboxOneLeaderboards__Class;
struct XboxOneLeaderboards {
    struct XboxOneLeaderboards__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneLeaderboards_FWDDECL)
#define IL2CPP_STRUCT_XboxOneLeaderboards_FWDDECL
#include <Modloader/app/structs/XboxOneLeaderboards__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneLeaderboards_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneLeaderboards_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneLeaderboards_FWDDECL)
#include <Modloader/app/structs/XboxOneLeaderboards.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneLeaderboards.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
