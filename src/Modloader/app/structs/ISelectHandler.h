#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISelectHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISelectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISelectHandler_DEFINED)
#define IL2CPP_STRUCT_ISelectHandler_DEFINED
struct ISelectHandler__Class;
struct ISelectHandler {
    struct ISelectHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISelectHandler_FWDDECL)
#define IL2CPP_STRUCT_ISelectHandler_FWDDECL
#include <Modloader/app/structs/ISelectHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ISelectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISelectHandler_DEFINED) && !defined(IL2CPP_STRUCT_ISelectHandler_FWDDECL)
#include <Modloader/app/structs/ISelectHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISelectHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
