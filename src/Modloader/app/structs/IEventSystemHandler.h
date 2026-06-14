#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEventSystemHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEventSystemHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventSystemHandler_DEFINED)
#define IL2CPP_STRUCT_IEventSystemHandler_DEFINED
struct IEventSystemHandler__Class;
struct IEventSystemHandler {
    struct IEventSystemHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEventSystemHandler_FWDDECL)
#define IL2CPP_STRUCT_IEventSystemHandler_FWDDECL
#include <Modloader/app/structs/IEventSystemHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IEventSystemHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventSystemHandler_DEFINED) && !defined(IL2CPP_STRUCT_IEventSystemHandler_FWDDECL)
#include <Modloader/app/structs/IEventSystemHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEventSystemHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
