#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager_DEFINED)
#include <Modloader/app/structs/TurbulenceManager__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceManager_DEFINED
struct TurbulenceManager__Class;
struct TurbulenceManager {
    struct TurbulenceManager__Class* klass;
    MonitorData* monitor;
    struct TurbulenceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceManager_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceManager_FWDDECL
#include <Modloader/app/structs/TurbulenceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceManager_FWDDECL)
#include <Modloader/app/structs/TurbulenceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
