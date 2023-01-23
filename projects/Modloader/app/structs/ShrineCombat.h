#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_DEFINED)
#include <Modloader/app/structs/ShrineCombat__Fields.h>
#if defined(IL2CPP_STRUCT_ShrineCombat__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_DEFINED
struct ShrineCombat__Class;
struct ShrineCombat {
    struct ShrineCombat__Class* klass;
    MonitorData* monitor;
    struct ShrineCombat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_FWDDECL
#include <Modloader/app/structs/ShrineCombat__Class.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_FWDDECL)
#include <Modloader/app/structs/ShrineCombat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
