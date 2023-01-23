#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructionResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructionResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionResponse_DEFINED)
#include <Modloader/app/structs/ConstructionResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ConstructionResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstructionResponse_DEFINED
struct ConstructionResponse__Class;
struct ConstructionResponse {
    struct ConstructionResponse__Class* klass;
    MonitorData* monitor;
    struct ConstructionResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstructionResponse_FWDDECL)
#define IL2CPP_STRUCT_ConstructionResponse_FWDDECL
#include <Modloader/app/structs/ConstructionResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstructionResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionResponse_DEFINED) && !defined(IL2CPP_STRUCT_ConstructionResponse_FWDDECL)
#include <Modloader/app/structs/ConstructionResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructionResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
