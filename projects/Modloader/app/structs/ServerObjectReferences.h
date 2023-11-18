#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectReferences_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectReferences_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectReferences_DEFINED)
#define IL2CPP_STRUCT_ServerObjectReferences_DEFINED
struct ServerObjectReferences__Class;
struct ServerObjectReferences {
    struct ServerObjectReferences__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectReferences_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectReferences_FWDDECL
#include <Modloader/app/structs/ServerObjectReferences__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectReferences_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectReferences_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectReferences_FWDDECL)
#include <Modloader/app/structs/ServerObjectReferences.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectReferences.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
