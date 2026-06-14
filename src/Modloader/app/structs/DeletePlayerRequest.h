#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeletePlayerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeletePlayerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeletePlayerRequest_DEFINED)
#include <Modloader/app/structs/DeletePlayerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeletePlayerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeletePlayerRequest_DEFINED
struct DeletePlayerRequest__Class;
struct DeletePlayerRequest {
    struct DeletePlayerRequest__Class* klass;
    MonitorData* monitor;
    struct DeletePlayerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeletePlayerRequest_FWDDECL)
#define IL2CPP_STRUCT_DeletePlayerRequest_FWDDECL
#include <Modloader/app/structs/DeletePlayerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeletePlayerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeletePlayerRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeletePlayerRequest_FWDDECL)
#include <Modloader/app/structs/DeletePlayerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeletePlayerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
