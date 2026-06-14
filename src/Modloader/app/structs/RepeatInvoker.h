#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RepeatInvoker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RepeatInvoker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RepeatInvoker_DEFINED)
#include <Modloader/app/structs/RepeatInvoker__Fields.h>
#if defined(IL2CPP_STRUCT_RepeatInvoker__Fields_DEFINED)
#define IL2CPP_STRUCT_RepeatInvoker_DEFINED
struct RepeatInvoker__Class;
struct RepeatInvoker {
    struct RepeatInvoker__Class* klass;
    MonitorData* monitor;
    struct RepeatInvoker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RepeatInvoker_FWDDECL)
#define IL2CPP_STRUCT_RepeatInvoker_FWDDECL
#include <Modloader/app/structs/RepeatInvoker__Class.h>
#endif
#undef IL2CPP_STRUCT_RepeatInvoker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RepeatInvoker_DEFINED) && !defined(IL2CPP_STRUCT_RepeatInvoker_FWDDECL)
#include <Modloader/app/structs/RepeatInvoker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RepeatInvoker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
