#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEventReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEventReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventReciever_DEFINED)
#define IL2CPP_STRUCT_IEventReciever_DEFINED
struct IEventReciever__Class;
struct IEventReciever {
    struct IEventReciever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEventReciever_FWDDECL)
#define IL2CPP_STRUCT_IEventReciever_FWDDECL
#include <Modloader/app/structs/IEventReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_IEventReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventReciever_DEFINED) && !defined(IL2CPP_STRUCT_IEventReciever_FWDDECL)
#include <Modloader/app/structs/IEventReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEventReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
