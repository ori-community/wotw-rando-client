#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockEntityRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockEntityRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockEntityRequest_DEFINED)
#include <Modloader/app/structs/BlockEntityRequest__Fields.h>
#if defined(IL2CPP_STRUCT_BlockEntityRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockEntityRequest_DEFINED
struct BlockEntityRequest__Class;
struct BlockEntityRequest {
    struct BlockEntityRequest__Class* klass;
    MonitorData* monitor;
    struct BlockEntityRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockEntityRequest_FWDDECL)
#define IL2CPP_STRUCT_BlockEntityRequest_FWDDECL
#include <Modloader/app/structs/BlockEntityRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockEntityRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockEntityRequest_DEFINED) && !defined(IL2CPP_STRUCT_BlockEntityRequest_FWDDECL)
#include <Modloader/app/structs/BlockEntityRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockEntityRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
