#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayScreen_DEFINED)
#include <Modloader/app/structs/ReplayScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayScreen_DEFINED
struct ReplayScreen__Class;
struct ReplayScreen {
    struct ReplayScreen__Class* klass;
    MonitorData* monitor;
    struct ReplayScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayScreen_FWDDECL)
#define IL2CPP_STRUCT_ReplayScreen_FWDDECL
#include <Modloader/app/structs/ReplayScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayScreen_DEFINED) && !defined(IL2CPP_STRUCT_ReplayScreen_FWDDECL)
#include <Modloader/app/structs/ReplayScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
