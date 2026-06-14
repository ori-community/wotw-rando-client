#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemInstance_2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemInstance_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_2_DEFINED)
#include <Modloader/app/structs/ItemInstance_2__Fields.h>
#if defined(IL2CPP_STRUCT_ItemInstance_2__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemInstance_2_DEFINED
struct ItemInstance_2__Class;
struct ItemInstance_2 {
    struct ItemInstance_2__Class* klass;
    MonitorData* monitor;
    struct ItemInstance_2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemInstance_2_FWDDECL)
#define IL2CPP_STRUCT_ItemInstance_2_FWDDECL
#include <Modloader/app/structs/ItemInstance_2__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemInstance_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_2_DEFINED) && !defined(IL2CPP_STRUCT_ItemInstance_2_FWDDECL)
#include <Modloader/app/structs/ItemInstance_2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemInstance_2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
