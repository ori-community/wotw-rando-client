#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBashPush_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBashPush_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBashPush_DEFINED)
#include <Modloader/app/structs/CartBashPush__Fields.h>
#if defined(IL2CPP_STRUCT_CartBashPush__Fields_DEFINED)
#define IL2CPP_STRUCT_CartBashPush_DEFINED
struct CartBashPush__Class;
struct CartBashPush {
    struct CartBashPush__Class* klass;
    MonitorData* monitor;
    struct CartBashPush__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBashPush_FWDDECL)
#define IL2CPP_STRUCT_CartBashPush_FWDDECL
#include <Modloader/app/structs/CartBashPush__Class.h>
#endif
#undef IL2CPP_STRUCT_CartBashPush_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBashPush_DEFINED) && !defined(IL2CPP_STRUCT_CartBashPush_FWDDECL)
#include <Modloader/app/structs/CartBashPush.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBashPush.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
