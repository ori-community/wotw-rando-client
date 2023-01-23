#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateSelectedHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateSelectedHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateSelectedHandler_DEFINED)
#define IL2CPP_STRUCT_IUpdateSelectedHandler_DEFINED
struct IUpdateSelectedHandler__Class;
struct IUpdateSelectedHandler {
    struct IUpdateSelectedHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateSelectedHandler_FWDDECL)
#define IL2CPP_STRUCT_IUpdateSelectedHandler_FWDDECL
#include <Modloader/app/structs/IUpdateSelectedHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateSelectedHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateSelectedHandler_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateSelectedHandler_FWDDECL)
#include <Modloader/app/structs/IUpdateSelectedHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateSelectedHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
