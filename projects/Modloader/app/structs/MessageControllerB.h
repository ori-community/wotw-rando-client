#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageControllerB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageControllerB_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageControllerB_DEFINED)
#include <Modloader/app/structs/MessageControllerB__Fields.h>
#if defined(IL2CPP_STRUCT_MessageControllerB__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageControllerB_DEFINED
struct MessageControllerB__Class;
struct MessageControllerB {
    struct MessageControllerB__Class* klass;
    MonitorData* monitor;
    struct MessageControllerB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageControllerB_FWDDECL)
#define IL2CPP_STRUCT_MessageControllerB_FWDDECL
#include <Modloader/app/structs/MessageControllerB__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageControllerB_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageControllerB_DEFINED) && !defined(IL2CPP_STRUCT_MessageControllerB_FWDDECL)
#include <Modloader/app/structs/MessageControllerB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageControllerB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
