#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateHandlerBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateHandlerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase_DEFINED)
#define IL2CPP_STRUCT_IUpdateHandlerBase_DEFINED
struct IUpdateHandlerBase__Class;
struct IUpdateHandlerBase {
    struct IUpdateHandlerBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase_FWDDECL)
#define IL2CPP_STRUCT_IUpdateHandlerBase_FWDDECL
#include <Modloader/app/structs/IUpdateHandlerBase__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateHandlerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateHandlerBase_FWDDECL)
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
