#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageEnd_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageEnd_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEnd_DEFINED)
#define IL2CPP_STRUCT_MessageEnd_DEFINED
struct MessageEnd__Class;
struct MessageEnd {
    struct MessageEnd__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MessageEnd_FWDDECL)
#define IL2CPP_STRUCT_MessageEnd_FWDDECL
#include <Modloader/app/structs/MessageEnd__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageEnd_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEnd_DEFINED) && !defined(IL2CPP_STRUCT_MessageEnd_FWDDECL)
#include <Modloader/app/structs/MessageEnd.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageEnd.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
