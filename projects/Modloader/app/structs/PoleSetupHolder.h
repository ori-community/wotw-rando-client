#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoleSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoleSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoleSetupHolder_DEFINED)
#include <Modloader/app/structs/PoleSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_PoleSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_PoleSetupHolder_DEFINED
struct PoleSetupHolder__Class;
struct PoleSetupHolder {
    struct PoleSetupHolder__Class* klass;
    MonitorData* monitor;
    struct PoleSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoleSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_PoleSetupHolder_FWDDECL
#include <Modloader/app/structs/PoleSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_PoleSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoleSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_PoleSetupHolder_FWDDECL)
#include <Modloader/app/structs/PoleSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoleSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
