#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDragHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDragHandler_DEFINED)
#define IL2CPP_STRUCT_IDragHandler_DEFINED
struct IDragHandler__Class;
struct IDragHandler {
    struct IDragHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDragHandler_FWDDECL)
#define IL2CPP_STRUCT_IDragHandler_FWDDECL
#include <Modloader/app/structs/IDragHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDragHandler_DEFINED) && !defined(IL2CPP_STRUCT_IDragHandler_FWDDECL)
#include <Modloader/app/structs/IDragHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDragHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
