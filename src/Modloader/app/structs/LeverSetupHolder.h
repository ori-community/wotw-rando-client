#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupHolder_DEFINED)
#include <Modloader/app/structs/LeverSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_LeverSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverSetupHolder_DEFINED
struct LeverSetupHolder__Class;
struct LeverSetupHolder {
    struct LeverSetupHolder__Class* klass;
    MonitorData* monitor;
    struct LeverSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_LeverSetupHolder_FWDDECL
#include <Modloader/app/structs/LeverSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_LeverSetupHolder_FWDDECL)
#include <Modloader/app/structs/LeverSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
