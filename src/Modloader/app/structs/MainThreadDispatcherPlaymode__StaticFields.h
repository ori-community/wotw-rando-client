#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_DEFINED
struct Queue_1_System_Action_;
struct MainThreadDispatcherPlaymode;
struct MainThreadDispatcherPlaymode__StaticFields {
    struct Queue_1_System_Action_* _executionQueue;
    struct MainThreadDispatcherPlaymode* s_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_FWDDECL
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#include <Modloader/app/structs/Queue_1_System_Action_.h>
#endif
#undef IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode__StaticFields_FWDDECL)
#include <Modloader/app/structs/MainThreadDispatcherPlaymode__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadDispatcherPlaymode__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
