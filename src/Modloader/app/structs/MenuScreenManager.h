#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuScreenManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuScreenManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenManager_DEFINED)
#include <Modloader/app/structs/MenuScreenManager__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreenManager__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuScreenManager_DEFINED
struct MenuScreenManager__Class;
struct MenuScreenManager {
    struct MenuScreenManager__Class* klass;
    MonitorData* monitor;
    struct MenuScreenManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuScreenManager_FWDDECL)
#define IL2CPP_STRUCT_MenuScreenManager_FWDDECL
#include <Modloader/app/structs/MenuScreenManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuScreenManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenManager_DEFINED) && !defined(IL2CPP_STRUCT_MenuScreenManager_FWDDECL)
#include <Modloader/app/structs/MenuScreenManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuScreenManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
