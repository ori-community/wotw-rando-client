#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreHealthAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreHealthAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthAction_DEFINED)
#include <Modloader/app/structs/RestoreHealthAction__Fields.h>
#if defined(IL2CPP_STRUCT_RestoreHealthAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RestoreHealthAction_DEFINED
struct RestoreHealthAction__Class;
struct RestoreHealthAction {
    struct RestoreHealthAction__Class* klass;
    MonitorData* monitor;
    struct RestoreHealthAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestoreHealthAction_FWDDECL)
#define IL2CPP_STRUCT_RestoreHealthAction_FWDDECL
#include <Modloader/app/structs/RestoreHealthAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RestoreHealthAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthAction_DEFINED) && !defined(IL2CPP_STRUCT_RestoreHealthAction_FWDDECL)
#include <Modloader/app/structs/RestoreHealthAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreHealthAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
