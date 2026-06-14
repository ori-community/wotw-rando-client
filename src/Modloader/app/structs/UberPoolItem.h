#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolItem_DEFINED)
#include <Modloader/app/structs/UberPoolItem__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolItem__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolItem_DEFINED
struct UberPoolItem__Class;
struct UberPoolItem {
    struct UberPoolItem__Class* klass;
    MonitorData* monitor;
    struct UberPoolItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolItem_FWDDECL)
#define IL2CPP_STRUCT_UberPoolItem_FWDDECL
#include <Modloader/app/structs/UberPoolItem__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolItem_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolItem_FWDDECL)
#include <Modloader/app/structs/UberPoolItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
