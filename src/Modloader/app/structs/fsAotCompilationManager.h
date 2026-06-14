#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotCompilationManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotCompilationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotCompilationManager_DEFINED)
#define IL2CPP_STRUCT_fsAotCompilationManager_DEFINED
struct fsAotCompilationManager__Class;
struct fsAotCompilationManager {
    struct fsAotCompilationManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsAotCompilationManager_FWDDECL)
#define IL2CPP_STRUCT_fsAotCompilationManager_FWDDECL
#include <Modloader/app/structs/fsAotCompilationManager__Class.h>
#endif
#undef IL2CPP_STRUCT_fsAotCompilationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotCompilationManager_DEFINED) && !defined(IL2CPP_STRUCT_fsAotCompilationManager_FWDDECL)
#include <Modloader/app/structs/fsAotCompilationManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotCompilationManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
