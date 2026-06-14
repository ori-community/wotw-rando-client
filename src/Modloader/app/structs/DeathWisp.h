#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathWisp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathWisp_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWisp_DEFINED)
#include <Modloader/app/structs/DeathWisp__Fields.h>
#if defined(IL2CPP_STRUCT_DeathWisp__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathWisp_DEFINED
struct DeathWisp__Class;
struct DeathWisp {
    struct DeathWisp__Class* klass;
    MonitorData* monitor;
    struct DeathWisp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathWisp_FWDDECL)
#define IL2CPP_STRUCT_DeathWisp_FWDDECL
#include <Modloader/app/structs/DeathWisp__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathWisp_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWisp_DEFINED) && !defined(IL2CPP_STRUCT_DeathWisp_FWDDECL)
#include <Modloader/app/structs/DeathWisp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathWisp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
