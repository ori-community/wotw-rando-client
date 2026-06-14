#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreMgr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreMgr_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreMgr_DEFINED)
#include <Modloader/app/structs/LocalDataStoreMgr__Fields.h>
#if defined(IL2CPP_STRUCT_LocalDataStoreMgr__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreMgr_DEFINED
struct LocalDataStoreMgr__Class;
struct LocalDataStoreMgr {
    struct LocalDataStoreMgr__Class* klass;
    MonitorData* monitor;
    struct LocalDataStoreMgr__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreMgr_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreMgr_FWDDECL
#include <Modloader/app/structs/LocalDataStoreMgr__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreMgr_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreMgr_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreMgr_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
