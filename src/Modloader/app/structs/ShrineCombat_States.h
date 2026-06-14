#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_States_DEFINED)
#include <Modloader/app/structs/ShrineCombat_States__Fields.h>
#if defined(IL2CPP_STRUCT_ShrineCombat_States__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_States_DEFINED
struct ShrineCombat_States__Class;
struct ShrineCombat_States {
    struct ShrineCombat_States__Class* klass;
    MonitorData* monitor;
    struct ShrineCombat_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_States_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_States_FWDDECL
#include <Modloader/app/structs/ShrineCombat_States__Class.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_States_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_States_FWDDECL)
#include <Modloader/app/structs/ShrineCombat_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
