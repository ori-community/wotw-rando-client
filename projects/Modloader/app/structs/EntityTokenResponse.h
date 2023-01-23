#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTokenResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTokenResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTokenResponse_DEFINED)
#include <Modloader/app/structs/EntityTokenResponse__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTokenResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityTokenResponse_DEFINED
struct EntityTokenResponse__Class;
struct EntityTokenResponse {
    struct EntityTokenResponse__Class* klass;
    MonitorData* monitor;
    struct EntityTokenResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTokenResponse_FWDDECL)
#define IL2CPP_STRUCT_EntityTokenResponse_FWDDECL
#include <Modloader/app/structs/EntityTokenResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityTokenResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTokenResponse_DEFINED) && !defined(IL2CPP_STRUCT_EntityTokenResponse_FWDDECL)
#include <Modloader/app/structs/EntityTokenResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTokenResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
