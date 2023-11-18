#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FuncAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FuncAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FuncAction_DEFINED)
#include <Modloader/app/structs/FuncAction__Fields.h>
#if defined(IL2CPP_STRUCT_FuncAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FuncAction_DEFINED
struct FuncAction__Class;
struct FuncAction {
    struct FuncAction__Class* klass;
    MonitorData* monitor;
    struct FuncAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FuncAction_FWDDECL)
#define IL2CPP_STRUCT_FuncAction_FWDDECL
#include <Modloader/app/structs/FuncAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FuncAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FuncAction_DEFINED) && !defined(IL2CPP_STRUCT_FuncAction_FWDDECL)
#include <Modloader/app/structs/FuncAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FuncAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
