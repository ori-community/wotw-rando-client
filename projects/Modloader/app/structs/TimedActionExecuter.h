#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedActionExecuter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedActionExecuter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionExecuter_DEFINED)
#include <Modloader/app/structs/TimedActionExecuter__Fields.h>
#if defined(IL2CPP_STRUCT_TimedActionExecuter__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedActionExecuter_DEFINED
struct TimedActionExecuter__Class;
struct TimedActionExecuter {
    struct TimedActionExecuter__Class* klass;
    MonitorData* monitor;
    struct TimedActionExecuter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedActionExecuter_FWDDECL)
#define IL2CPP_STRUCT_TimedActionExecuter_FWDDECL
#include <Modloader/app/structs/TimedActionExecuter__Class.h>
#endif
#undef IL2CPP_STRUCT_TimedActionExecuter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionExecuter_DEFINED) && !defined(IL2CPP_STRUCT_TimedActionExecuter_FWDDECL)
#include <Modloader/app/structs/TimedActionExecuter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedActionExecuter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
