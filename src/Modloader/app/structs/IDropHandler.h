#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDropHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDropHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDropHandler_DEFINED)
#define IL2CPP_STRUCT_IDropHandler_DEFINED
struct IDropHandler__Class;
struct IDropHandler {
    struct IDropHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDropHandler_FWDDECL)
#define IL2CPP_STRUCT_IDropHandler_FWDDECL
#include <Modloader/app/structs/IDropHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IDropHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDropHandler_DEFINED) && !defined(IL2CPP_STRUCT_IDropHandler_FWDDECL)
#include <Modloader/app/structs/IDropHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDropHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
