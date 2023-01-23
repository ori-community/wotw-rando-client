#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateTestHookUp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateTestHookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateTestHookUp_DEFINED)
#include <Modloader/app/structs/UberStateTestHookUp__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateTestHookUp__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateTestHookUp_DEFINED
struct UberStateTestHookUp__Class;
struct UberStateTestHookUp {
    struct UberStateTestHookUp__Class* klass;
    MonitorData* monitor;
    struct UberStateTestHookUp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateTestHookUp_FWDDECL)
#define IL2CPP_STRUCT_UberStateTestHookUp_FWDDECL
#include <Modloader/app/structs/UberStateTestHookUp__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateTestHookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateTestHookUp_DEFINED) && !defined(IL2CPP_STRUCT_UberStateTestHookUp_FWDDECL)
#include <Modloader/app/structs/UberStateTestHookUp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateTestHookUp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
