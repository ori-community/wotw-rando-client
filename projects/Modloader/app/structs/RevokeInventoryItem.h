#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeInventoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeInventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItem_DEFINED)
#include <Modloader/app/structs/RevokeInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeInventoryItem_DEFINED
struct RevokeInventoryItem__Class;
struct RevokeInventoryItem {
    struct RevokeInventoryItem__Class* klass;
    MonitorData* monitor;
    struct RevokeInventoryItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeInventoryItem_FWDDECL)
#define IL2CPP_STRUCT_RevokeInventoryItem_FWDDECL
#include <Modloader/app/structs/RevokeInventoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeInventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItem_DEFINED) && !defined(IL2CPP_STRUCT_RevokeInventoryItem_FWDDECL)
#include <Modloader/app/structs/RevokeInventoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeInventoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
