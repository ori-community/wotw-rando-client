#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Panel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Panel_INITIALIZING
#if !defined(IL2CPP_STRUCT_Panel_DEFINED)
#include <Modloader/app/structs/Panel__Fields.h>
#if defined(IL2CPP_STRUCT_Panel__Fields_DEFINED)
#define IL2CPP_STRUCT_Panel_DEFINED
struct Panel__Class;
struct Panel {
    struct Panel__Class* klass;
    MonitorData* monitor;
    struct Panel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Panel_FWDDECL)
#define IL2CPP_STRUCT_Panel_FWDDECL
#include <Modloader/app/structs/Panel__Class.h>
#endif
#undef IL2CPP_STRUCT_Panel_INITIALIZING
#if !defined(IL2CPP_STRUCT_Panel_DEFINED) && !defined(IL2CPP_STRUCT_Panel_FWDDECL)
#include <Modloader/app/structs/Panel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Panel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
