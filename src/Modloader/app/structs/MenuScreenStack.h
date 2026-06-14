#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuScreenStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuScreenStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenStack_DEFINED)
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuScreenStack_DEFINED
struct MenuScreenStack__Class;
struct MenuScreenStack {
    struct MenuScreenStack__Class* klass;
    MonitorData* monitor;
    struct MenuScreenStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuScreenStack_FWDDECL)
#define IL2CPP_STRUCT_MenuScreenStack_FWDDECL
#include <Modloader/app/structs/MenuScreenStack__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuScreenStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenStack_DEFINED) && !defined(IL2CPP_STRUCT_MenuScreenStack_FWDDECL)
#include <Modloader/app/structs/MenuScreenStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuScreenStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
