#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRockSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRockSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRockSetup_DEFINED)
#include <Modloader/app/structs/FallingRockSetup__Fields.h>
#if defined(IL2CPP_STRUCT_FallingRockSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_FallingRockSetup_DEFINED
struct FallingRockSetup__Class;
struct FallingRockSetup {
    struct FallingRockSetup__Class* klass;
    MonitorData* monitor;
    struct FallingRockSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRockSetup_FWDDECL)
#define IL2CPP_STRUCT_FallingRockSetup_FWDDECL
#include <Modloader/app/structs/FallingRockSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_FallingRockSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRockSetup_DEFINED) && !defined(IL2CPP_STRUCT_FallingRockSetup_FWDDECL)
#include <Modloader/app/structs/FallingRockSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRockSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
