#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserInventoryResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserInventoryResult_DEFINED)
#include <Modloader/app/structs/GetUserInventoryResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserInventoryResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserInventoryResult_DEFINED
struct GetUserInventoryResult__Class;
struct GetUserInventoryResult {
    struct GetUserInventoryResult__Class* klass;
    MonitorData* monitor;
    struct GetUserInventoryResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserInventoryResult_FWDDECL)
#define IL2CPP_STRUCT_GetUserInventoryResult_FWDDECL
#include <Modloader/app/structs/GetUserInventoryResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserInventoryResult_DEFINED) && !defined(IL2CPP_STRUCT_GetUserInventoryResult_FWDDECL)
#include <Modloader/app/structs/GetUserInventoryResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserInventoryResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
