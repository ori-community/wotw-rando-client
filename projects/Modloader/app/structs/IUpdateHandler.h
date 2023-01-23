#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandler_DEFINED)
#define IL2CPP_STRUCT_IUpdateHandler_DEFINED
struct IUpdateHandler__Class;
struct IUpdateHandler {
    struct IUpdateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateHandler_FWDDECL)
#define IL2CPP_STRUCT_IUpdateHandler_FWDDECL
#include <Modloader/app/structs/IUpdateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandler_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateHandler_FWDDECL)
#include <Modloader/app/structs/IUpdateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
