#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RightMenuManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RightMenuManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightMenuManager_DEFINED)
#include <Modloader/app/structs/RightMenuManager__Fields.h>
#if defined(IL2CPP_STRUCT_RightMenuManager__Fields_DEFINED)
#define IL2CPP_STRUCT_RightMenuManager_DEFINED
struct RightMenuManager__Class;
struct RightMenuManager {
    struct RightMenuManager__Class* klass;
    MonitorData* monitor;
    struct RightMenuManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RightMenuManager_FWDDECL)
#define IL2CPP_STRUCT_RightMenuManager_FWDDECL
#include <Modloader/app/structs/RightMenuManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RightMenuManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightMenuManager_DEFINED) && !defined(IL2CPP_STRUCT_RightMenuManager_FWDDECL)
#include <Modloader/app/structs/RightMenuManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RightMenuManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
