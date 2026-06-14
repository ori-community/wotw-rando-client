#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager_DEFINED)
#include <Modloader/app/structs/WindowManager__Fields.h>
#if defined(IL2CPP_STRUCT_WindowManager__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowManager_DEFINED
struct WindowManager__Class;
struct WindowManager {
    struct WindowManager__Class* klass;
    MonitorData* monitor;
    struct WindowManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowManager_FWDDECL)
#define IL2CPP_STRUCT_WindowManager_FWDDECL
#include <Modloader/app/structs/WindowManager__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager_DEFINED) && !defined(IL2CPP_STRUCT_WindowManager_FWDDECL)
#include <Modloader/app/structs/WindowManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
