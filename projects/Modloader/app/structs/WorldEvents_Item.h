#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEvents_Item_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEvents_Item_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents_Item_DEFINED)
#include <Modloader/app/structs/WorldEvents_Item__Fields.h>
#if defined(IL2CPP_STRUCT_WorldEvents_Item__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEvents_Item_DEFINED
struct WorldEvents_Item__Class;
struct WorldEvents_Item {
    struct WorldEvents_Item__Class* klass;
    MonitorData* monitor;
    struct WorldEvents_Item__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEvents_Item_FWDDECL)
#define IL2CPP_STRUCT_WorldEvents_Item_FWDDECL
#include <Modloader/app/structs/WorldEvents_Item__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEvents_Item_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents_Item_DEFINED) && !defined(IL2CPP_STRUCT_WorldEvents_Item_FWDDECL)
#include <Modloader/app/structs/WorldEvents_Item.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEvents_Item.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
