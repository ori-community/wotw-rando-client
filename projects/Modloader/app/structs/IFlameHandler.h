#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFlameHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFlameHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFlameHandler_DEFINED)
#define IL2CPP_STRUCT_IFlameHandler_DEFINED
struct IFlameHandler__Class;
struct IFlameHandler {
    struct IFlameHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFlameHandler_FWDDECL)
#define IL2CPP_STRUCT_IFlameHandler_FWDDECL
#include <Modloader/app/structs/IFlameHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IFlameHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFlameHandler_DEFINED) && !defined(IL2CPP_STRUCT_IFlameHandler_FWDDECL)
#include <Modloader/app/structs/IFlameHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFlameHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
