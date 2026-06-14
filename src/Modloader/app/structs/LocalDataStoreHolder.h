#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder_DEFINED)
#include <Modloader/app/structs/LocalDataStoreHolder__Fields.h>
#if defined(IL2CPP_STRUCT_LocalDataStoreHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreHolder_DEFINED
struct LocalDataStoreHolder__Class;
struct LocalDataStoreHolder {
    struct LocalDataStoreHolder__Class* klass;
    MonitorData* monitor;
    struct LocalDataStoreHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreHolder_FWDDECL
#include <Modloader/app/structs/LocalDataStoreHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreHolder_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
