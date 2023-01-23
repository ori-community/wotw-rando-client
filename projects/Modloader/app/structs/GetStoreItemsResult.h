#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetStoreItemsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetStoreItemsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStoreItemsResult_DEFINED)
#include <Modloader/app/structs/GetStoreItemsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetStoreItemsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetStoreItemsResult_DEFINED
struct GetStoreItemsResult__Class;
struct GetStoreItemsResult {
    struct GetStoreItemsResult__Class* klass;
    MonitorData* monitor;
    struct GetStoreItemsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetStoreItemsResult_FWDDECL)
#define IL2CPP_STRUCT_GetStoreItemsResult_FWDDECL
#include <Modloader/app/structs/GetStoreItemsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetStoreItemsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStoreItemsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetStoreItemsResult_FWDDECL)
#include <Modloader/app/structs/GetStoreItemsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetStoreItemsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
