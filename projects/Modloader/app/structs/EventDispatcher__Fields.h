#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDispatcher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDispatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDispatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDispatcher__Fields_DEFINED
struct EventListener;
struct Boolean__Array;
struct EventDispatcher;
struct __declspec(align(8)) EventDispatcher__Fields {
    struct EventListener* m_Listener;
    struct Boolean__Array* m_EventEnabled;
    bool m_activityFilteringEnabled;
    struct EventDispatcher* m_Next;
};
#endif
#if !defined(IL2CPP_STRUCT_EventDispatcher__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventDispatcher__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/EventDispatcher.h>
#include <Modloader/app/structs/EventListener.h>
#endif
#undef IL2CPP_STRUCT_EventDispatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDispatcher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventDispatcher__Fields_FWDDECL)
#include <Modloader/app/structs/EventDispatcher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDispatcher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
