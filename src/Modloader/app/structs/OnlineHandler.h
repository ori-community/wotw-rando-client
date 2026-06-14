#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnlineHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnlineHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler_DEFINED)
#include <Modloader/app/structs/OnlineHandler__Fields.h>
#if defined(IL2CPP_STRUCT_OnlineHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_OnlineHandler_DEFINED
struct OnlineHandler__Class;
struct OnlineHandler {
    struct OnlineHandler__Class* klass;
    MonitorData* monitor;
    struct OnlineHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnlineHandler_FWDDECL)
#define IL2CPP_STRUCT_OnlineHandler_FWDDECL
#include <Modloader/app/structs/OnlineHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_OnlineHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler_DEFINED) && !defined(IL2CPP_STRUCT_OnlineHandler_FWDDECL)
#include <Modloader/app/structs/OnlineHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnlineHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
