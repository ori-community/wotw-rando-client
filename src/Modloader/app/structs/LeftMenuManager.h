#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeftMenuManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeftMenuManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeftMenuManager_DEFINED)
#include <Modloader/app/structs/LeftMenuManager__Fields.h>
#if defined(IL2CPP_STRUCT_LeftMenuManager__Fields_DEFINED)
#define IL2CPP_STRUCT_LeftMenuManager_DEFINED
struct LeftMenuManager__Class;
struct LeftMenuManager {
    struct LeftMenuManager__Class* klass;
    MonitorData* monitor;
    struct LeftMenuManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeftMenuManager_FWDDECL)
#define IL2CPP_STRUCT_LeftMenuManager_FWDDECL
#include <Modloader/app/structs/LeftMenuManager__Class.h>
#endif
#undef IL2CPP_STRUCT_LeftMenuManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeftMenuManager_DEFINED) && !defined(IL2CPP_STRUCT_LeftMenuManager_FWDDECL)
#include <Modloader/app/structs/LeftMenuManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeftMenuManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
