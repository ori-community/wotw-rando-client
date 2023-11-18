#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventListener__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventListener__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EventListener__StaticFields_DEFINED
struct Object;
struct EventListener;
struct List_1_System_WeakReference_;
struct EventListener__StaticFields {
    struct Object* s_EventSourceCreatedLock;
    struct EventListener* s_Listeners;
    struct List_1_System_WeakReference_* s_EventSources;
    bool s_CreatingListener;
    bool s_EventSourceShutdownRegistered;
};
#endif
#if !defined(IL2CPP_STRUCT_EventListener__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EventListener__StaticFields_FWDDECL
#include <Modloader/app/structs/EventListener.h>
#include <Modloader/app/structs/List_1_System_WeakReference_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EventListener__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EventListener__StaticFields_FWDDECL)
#include <Modloader/app/structs/EventListener__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventListener__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
