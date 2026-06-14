#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreItem_DEFINED)
#include <Modloader/app/structs/StoreItem__Fields.h>
#if defined(IL2CPP_STRUCT_StoreItem__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreItem_DEFINED
struct StoreItem__Class;
struct StoreItem {
    struct StoreItem__Class* klass;
    MonitorData* monitor;
    struct StoreItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreItem_FWDDECL)
#define IL2CPP_STRUCT_StoreItem_FWDDECL
#include <Modloader/app/structs/StoreItem__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreItem_DEFINED) && !defined(IL2CPP_STRUCT_StoreItem_FWDDECL)
#include <Modloader/app/structs/StoreItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
