#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDeselectHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDeselectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeselectHandler_DEFINED)
#define IL2CPP_STRUCT_IDeselectHandler_DEFINED
struct IDeselectHandler__Class;
struct IDeselectHandler {
    struct IDeselectHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDeselectHandler_FWDDECL)
#define IL2CPP_STRUCT_IDeselectHandler_FWDDECL
#include <Modloader/app/structs/IDeselectHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IDeselectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeselectHandler_DEFINED) && !defined(IL2CPP_STRUCT_IDeselectHandler_FWDDECL)
#include <Modloader/app/structs/IDeselectHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDeselectHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
