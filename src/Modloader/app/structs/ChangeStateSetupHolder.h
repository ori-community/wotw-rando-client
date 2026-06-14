#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateSetupHolder_DEFINED)
#include <Modloader/app/structs/ChangeStateSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeStateSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeStateSetupHolder_DEFINED
struct ChangeStateSetupHolder__Class;
struct ChangeStateSetupHolder {
    struct ChangeStateSetupHolder__Class* klass;
    MonitorData* monitor;
    struct ChangeStateSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateSetupHolder_FWDDECL
#include <Modloader/app/structs/ChangeStateSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeStateSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateSetupHolder_FWDDECL)
#include <Modloader/app/structs/ChangeStateSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
