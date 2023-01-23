#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRequest_DEFINED)
#define IL2CPP_STRUCT_IRequest_DEFINED
struct IRequest__Class;
struct IRequest {
    struct IRequest__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRequest_FWDDECL)
#define IL2CPP_STRUCT_IRequest_FWDDECL
#include <Modloader/app/structs/IRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_IRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRequest_DEFINED) && !defined(IL2CPP_STRUCT_IRequest_FWDDECL)
#include <Modloader/app/structs/IRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
