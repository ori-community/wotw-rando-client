#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockTreeSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockTreeSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockTreeSetup_DEFINED)
#include <Modloader/app/structs/RockTreeSetup__Fields.h>
#if defined(IL2CPP_STRUCT_RockTreeSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_RockTreeSetup_DEFINED
struct RockTreeSetup__Class;
struct RockTreeSetup {
    struct RockTreeSetup__Class* klass;
    MonitorData* monitor;
    struct RockTreeSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockTreeSetup_FWDDECL)
#define IL2CPP_STRUCT_RockTreeSetup_FWDDECL
#include <Modloader/app/structs/RockTreeSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_RockTreeSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockTreeSetup_DEFINED) && !defined(IL2CPP_STRUCT_RockTreeSetup_FWDDECL)
#include <Modloader/app/structs/RockTreeSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockTreeSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
