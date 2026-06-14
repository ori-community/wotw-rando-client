#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISubmitHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISubmitHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubmitHandler_DEFINED)
#define IL2CPP_STRUCT_ISubmitHandler_DEFINED
struct ISubmitHandler__Class;
struct ISubmitHandler {
    struct ISubmitHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISubmitHandler_FWDDECL)
#define IL2CPP_STRUCT_ISubmitHandler_FWDDECL
#include <Modloader/app/structs/ISubmitHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ISubmitHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubmitHandler_DEFINED) && !defined(IL2CPP_STRUCT_ISubmitHandler_FWDDECL)
#include <Modloader/app/structs/ISubmitHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISubmitHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
