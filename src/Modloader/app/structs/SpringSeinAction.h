#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringSeinAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringSeinAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringSeinAction_DEFINED)
#include <Modloader/app/structs/SpringSeinAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpringSeinAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringSeinAction_DEFINED
struct SpringSeinAction__Class;
struct SpringSeinAction {
    struct SpringSeinAction__Class* klass;
    MonitorData* monitor;
    struct SpringSeinAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringSeinAction_FWDDECL)
#define IL2CPP_STRUCT_SpringSeinAction_FWDDECL
#include <Modloader/app/structs/SpringSeinAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringSeinAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringSeinAction_DEFINED) && !defined(IL2CPP_STRUCT_SpringSeinAction_FWDDECL)
#include <Modloader/app/structs/SpringSeinAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringSeinAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
