#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuTabManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuTabManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabManager_DEFINED)
#include <Modloader/app/structs/MenuTabManager__Fields.h>
#if defined(IL2CPP_STRUCT_MenuTabManager__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuTabManager_DEFINED
struct MenuTabManager__Class;
struct MenuTabManager {
    struct MenuTabManager__Class* klass;
    MonitorData* monitor;
    struct MenuTabManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuTabManager_FWDDECL)
#define IL2CPP_STRUCT_MenuTabManager_FWDDECL
#include <Modloader/app/structs/MenuTabManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuTabManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabManager_DEFINED) && !defined(IL2CPP_STRUCT_MenuTabManager_FWDDECL)
#include <Modloader/app/structs/MenuTabManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuTabManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
