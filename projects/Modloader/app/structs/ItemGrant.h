#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemGrant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemGrant_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemGrant_DEFINED)
#include <Modloader/app/structs/ItemGrant__Fields.h>
#if defined(IL2CPP_STRUCT_ItemGrant__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemGrant_DEFINED
struct ItemGrant__Class;
struct ItemGrant {
    struct ItemGrant__Class* klass;
    MonitorData* monitor;
    struct ItemGrant__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemGrant_FWDDECL)
#define IL2CPP_STRUCT_ItemGrant_FWDDECL
#include <Modloader/app/structs/ItemGrant__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemGrant_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemGrant_DEFINED) && !defined(IL2CPP_STRUCT_ItemGrant_FWDDECL)
#include <Modloader/app/structs/ItemGrant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemGrant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
