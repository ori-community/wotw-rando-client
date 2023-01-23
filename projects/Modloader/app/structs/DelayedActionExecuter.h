#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedActionExecuter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedActionExecuter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter_DEFINED)
#include <Modloader/app/structs/DelayedActionExecuter__Fields.h>
#if defined(IL2CPP_STRUCT_DelayedActionExecuter__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedActionExecuter_DEFINED
struct DelayedActionExecuter__Class;
struct DelayedActionExecuter {
    struct DelayedActionExecuter__Class* klass;
    MonitorData* monitor;
    struct DelayedActionExecuter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter_FWDDECL)
#define IL2CPP_STRUCT_DelayedActionExecuter_FWDDECL
#include <Modloader/app/structs/DelayedActionExecuter__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedActionExecuter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter_DEFINED) && !defined(IL2CPP_STRUCT_DelayedActionExecuter_FWDDECL)
#include <Modloader/app/structs/DelayedActionExecuter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedActionExecuter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
