#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_DEFINED
struct UnityEvent;
struct __declspec(align(8)) ActionTimer_TimedAction__Fields {
    float delay;
    struct UnityEvent* action;
};
#endif
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_FWDDECL
#include <Modloader/app/structs/UnityEvent.h>
#endif
#undef IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_FWDDECL)
#include <Modloader/app/structs/ActionTimer_TimedAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionTimer_TimedAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
