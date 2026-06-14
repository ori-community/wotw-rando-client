#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsumeItemRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsumeItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsumeItemRequest_DEFINED)
#include <Modloader/app/structs/ConsumeItemRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ConsumeItemRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ConsumeItemRequest_DEFINED
struct ConsumeItemRequest__Class;
struct ConsumeItemRequest {
    struct ConsumeItemRequest__Class* klass;
    MonitorData* monitor;
    struct ConsumeItemRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsumeItemRequest_FWDDECL)
#define IL2CPP_STRUCT_ConsumeItemRequest_FWDDECL
#include <Modloader/app/structs/ConsumeItemRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsumeItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsumeItemRequest_DEFINED) && !defined(IL2CPP_STRUCT_ConsumeItemRequest_FWDDECL)
#include <Modloader/app/structs/ConsumeItemRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsumeItemRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
