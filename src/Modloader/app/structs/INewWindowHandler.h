#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INewWindowHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INewWindowHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_INewWindowHandler_DEFINED)
#define IL2CPP_STRUCT_INewWindowHandler_DEFINED
struct INewWindowHandler__Class;
struct INewWindowHandler {
    struct INewWindowHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INewWindowHandler_FWDDECL)
#define IL2CPP_STRUCT_INewWindowHandler_FWDDECL
#include <Modloader/app/structs/INewWindowHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_INewWindowHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_INewWindowHandler_DEFINED) && !defined(IL2CPP_STRUCT_INewWindowHandler_FWDDECL)
#include <Modloader/app/structs/INewWindowHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INewWindowHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
