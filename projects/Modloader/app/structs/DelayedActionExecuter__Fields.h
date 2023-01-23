#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedActionExecuter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedActionExecuter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter__Fields_DEFINED)
#include <Modloader/app/structs/TimedActionExecuter__Fields.h>
#if defined(IL2CPP_STRUCT_TimedActionExecuter__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedActionExecuter__Fields_DEFINED
struct ActionMethod;
struct DelayedActionExecuter__Fields {
    struct TimedActionExecuter__Fields _;
    float Delay;
    struct ActionMethod* m_action;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedActionExecuter__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_DelayedActionExecuter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionExecuter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedActionExecuter__Fields_FWDDECL)
#include <Modloader/app/structs/DelayedActionExecuter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedActionExecuter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
