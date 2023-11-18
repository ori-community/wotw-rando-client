#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemInstance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_DEFINED)
#include <Modloader/app/structs/ItemInstance__Fields.h>
#if defined(IL2CPP_STRUCT_ItemInstance__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemInstance_DEFINED
struct ItemInstance__Class;
struct ItemInstance {
    struct ItemInstance__Class* klass;
    MonitorData* monitor;
    struct ItemInstance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemInstance_FWDDECL)
#define IL2CPP_STRUCT_ItemInstance_FWDDECL
#include <Modloader/app/structs/ItemInstance__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_DEFINED) && !defined(IL2CPP_STRUCT_ItemInstance_FWDDECL)
#include <Modloader/app/structs/ItemInstance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemInstance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
