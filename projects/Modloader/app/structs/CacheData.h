#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CacheData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CacheData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheData_DEFINED)
#include <Modloader/app/structs/CacheData__Fields.h>
#if defined(IL2CPP_STRUCT_CacheData__Fields_DEFINED)
#define IL2CPP_STRUCT_CacheData_DEFINED
struct CacheData__Class;
struct CacheData {
    struct CacheData__Class* klass;
    MonitorData* monitor;
    struct CacheData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CacheData_FWDDECL)
#define IL2CPP_STRUCT_CacheData_FWDDECL
#include <Modloader/app/structs/CacheData__Class.h>
#endif
#undef IL2CPP_STRUCT_CacheData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheData_DEFINED) && !defined(IL2CPP_STRUCT_CacheData_FWDDECL)
#include <Modloader/app/structs/CacheData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CacheData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
