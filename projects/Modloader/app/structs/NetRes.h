#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetRes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetRes_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetRes_DEFINED)
#define IL2CPP_STRUCT_NetRes_DEFINED
struct NetRes__Class;
struct NetRes {
    struct NetRes__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NetRes_FWDDECL)
#define IL2CPP_STRUCT_NetRes_FWDDECL
#include <Modloader/app/structs/NetRes__Class.h>
#endif
#undef IL2CPP_STRUCT_NetRes_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetRes_DEFINED) && !defined(IL2CPP_STRUCT_NetRes_FWDDECL)
#include <Modloader/app/structs/NetRes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetRes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
