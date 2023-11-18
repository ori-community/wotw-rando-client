#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_DEFINED)
#include <Modloader/app/structs/UberPoolManager__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolManager__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolManager_DEFINED
struct UberPoolManager__Class;
struct UberPoolManager {
    struct UberPoolManager__Class* klass;
    MonitorData* monitor;
    struct UberPoolManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolManager_FWDDECL)
#define IL2CPP_STRUCT_UberPoolManager_FWDDECL
#include <Modloader/app/structs/UberPoolManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolManager_FWDDECL)
#include <Modloader/app/structs/UberPoolManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
