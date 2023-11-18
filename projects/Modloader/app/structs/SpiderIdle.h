#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderIdle_DEFINED)
#include <Modloader/app/structs/SpiderIdle__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderIdle_DEFINED
struct SpiderIdle__Class;
struct SpiderIdle {
    struct SpiderIdle__Class* klass;
    MonitorData* monitor;
    struct SpiderIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderIdle_FWDDECL)
#define IL2CPP_STRUCT_SpiderIdle_FWDDECL
#include <Modloader/app/structs/SpiderIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderIdle_DEFINED) && !defined(IL2CPP_STRUCT_SpiderIdle_FWDDECL)
#include <Modloader/app/structs/SpiderIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
