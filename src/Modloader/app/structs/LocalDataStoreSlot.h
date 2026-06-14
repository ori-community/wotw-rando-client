#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreSlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot_DEFINED)
#include <Modloader/app/structs/LocalDataStoreSlot__Fields.h>
#if defined(IL2CPP_STRUCT_LocalDataStoreSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreSlot_DEFINED
struct LocalDataStoreSlot__Class;
struct LocalDataStoreSlot {
    struct LocalDataStoreSlot__Class* klass;
    MonitorData* monitor;
    struct LocalDataStoreSlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreSlot_FWDDECL
#include <Modloader/app/structs/LocalDataStoreSlot__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreSlot_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
