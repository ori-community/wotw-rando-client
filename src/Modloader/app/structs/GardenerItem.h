#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerItem_DEFINED)
#include <Modloader/app/structs/GardenerItem__Fields.h>
#if defined(IL2CPP_STRUCT_GardenerItem__Fields_DEFINED)
#define IL2CPP_STRUCT_GardenerItem_DEFINED
struct GardenerItem__Class;
struct GardenerItem {
    struct GardenerItem__Class* klass;
    MonitorData* monitor;
    struct GardenerItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerItem_FWDDECL)
#define IL2CPP_STRUCT_GardenerItem_FWDDECL
#include <Modloader/app/structs/GardenerItem__Class.h>
#endif
#undef IL2CPP_STRUCT_GardenerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerItem_DEFINED) && !defined(IL2CPP_STRUCT_GardenerItem_FWDDECL)
#include <Modloader/app/structs/GardenerItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
