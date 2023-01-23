#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RespawningPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RespawningPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_RespawningPlaceholder_DEFINED
struct RespawningPlaceholder__Class;
struct RespawningPlaceholder {
    struct RespawningPlaceholder__Class* klass;
    MonitorData* monitor;
    struct RespawningPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_RespawningPlaceholder_FWDDECL
#include <Modloader/app/structs/RespawningPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_RespawningPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_RespawningPlaceholder_FWDDECL)
#include <Modloader/app/structs/RespawningPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RespawningPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
