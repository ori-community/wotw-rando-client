#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapUI_DEFINED)
#include <Modloader/app/structs/AreaMapUI__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapUI__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapUI_DEFINED
struct AreaMapUI__Class;
struct AreaMapUI {
    struct AreaMapUI__Class* klass;
    MonitorData* monitor;
    struct AreaMapUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapUI_FWDDECL)
#define IL2CPP_STRUCT_AreaMapUI_FWDDECL
#include <Modloader/app/structs/AreaMapUI__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapUI_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapUI_FWDDECL)
#include <Modloader/app/structs/AreaMapUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
