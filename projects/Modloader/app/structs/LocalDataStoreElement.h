#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreElement_DEFINED)
#include <Modloader/app/structs/LocalDataStoreElement__Fields.h>
#if defined(IL2CPP_STRUCT_LocalDataStoreElement__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreElement_DEFINED
struct LocalDataStoreElement__Class;
struct LocalDataStoreElement {
    struct LocalDataStoreElement__Class* klass;
    MonitorData* monitor;
    struct LocalDataStoreElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreElement_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreElement_FWDDECL
#include <Modloader/app/structs/LocalDataStoreElement__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreElement_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreElement_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
