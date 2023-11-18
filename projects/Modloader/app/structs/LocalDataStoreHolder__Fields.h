#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreHolder__Fields_DEFINED
struct LocalDataStore;
struct __declspec(align(8)) LocalDataStoreHolder__Fields {
    struct LocalDataStore* m_Store;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreHolder__Fields_FWDDECL
#include <Modloader/app/structs/LocalDataStore.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreHolder__Fields_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
