#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager_DEFINED)
#include <Modloader/app/structs/TitleScreenManager__Fields.h>
#if defined(IL2CPP_STRUCT_TitleScreenManager__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleScreenManager_DEFINED
struct TitleScreenManager__Class;
struct TitleScreenManager {
    struct TitleScreenManager__Class* klass;
    MonitorData* monitor;
    struct TitleScreenManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenManager_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenManager_FWDDECL
#include <Modloader/app/structs/TitleScreenManager__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleScreenManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenManager_FWDDECL)
#include <Modloader/app/structs/TitleScreenManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
