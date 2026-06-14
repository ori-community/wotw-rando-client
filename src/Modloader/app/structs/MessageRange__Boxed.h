#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageRange__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageRange__Boxed_DEFINED)
#include <Modloader/app/structs/MessageRange.h>
#if defined(IL2CPP_STRUCT_MessageRange_DEFINED)
#define IL2CPP_STRUCT_MessageRange__Boxed_DEFINED
struct MessageRange__Class;
struct MessageRange__Boxed {
    struct MessageRange__Class* klass;
    MonitorData* monitor;
    struct MessageRange fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageRange__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MessageRange__Boxed_FWDDECL
#include <Modloader/app/structs/MessageRange__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageRange__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MessageRange__Boxed_FWDDECL)
#include <Modloader/app/structs/MessageRange__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageRange__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
