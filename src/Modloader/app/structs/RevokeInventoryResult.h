#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeInventoryResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryResult_DEFINED)
#include <Modloader/app/structs/RevokeInventoryResult__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeInventoryResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeInventoryResult_DEFINED
struct RevokeInventoryResult__Class;
struct RevokeInventoryResult {
    struct RevokeInventoryResult__Class* klass;
    MonitorData* monitor;
    struct RevokeInventoryResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeInventoryResult_FWDDECL)
#define IL2CPP_STRUCT_RevokeInventoryResult_FWDDECL
#include <Modloader/app/structs/RevokeInventoryResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryResult_DEFINED) && !defined(IL2CPP_STRUCT_RevokeInventoryResult_FWDDECL)
#include <Modloader/app/structs/RevokeInventoryResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeInventoryResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
