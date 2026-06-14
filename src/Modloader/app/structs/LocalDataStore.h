#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStore_DEFINED)
#include <Modloader/app/structs/LocalDataStore__Fields.h>
#if defined(IL2CPP_STRUCT_LocalDataStore__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStore_DEFINED
struct LocalDataStore__Class;
struct LocalDataStore {
    struct LocalDataStore__Class* klass;
    MonitorData* monitor;
    struct LocalDataStore__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStore_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStore_FWDDECL
#include <Modloader/app/structs/LocalDataStore__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStore_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStore_FWDDECL)
#include <Modloader/app/structs/LocalDataStore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
