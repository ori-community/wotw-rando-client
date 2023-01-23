#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Objective_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Objective_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective_DEFINED)
#include <Modloader/app/structs/Objective__Fields.h>
#if defined(IL2CPP_STRUCT_Objective__Fields_DEFINED)
#define IL2CPP_STRUCT_Objective_DEFINED
struct Objective__Class;
struct Objective {
    struct Objective__Class* klass;
    MonitorData* monitor;
    struct Objective__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Objective_FWDDECL)
#define IL2CPP_STRUCT_Objective_FWDDECL
#include <Modloader/app/structs/Objective__Class.h>
#endif
#undef IL2CPP_STRUCT_Objective_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective_DEFINED) && !defined(IL2CPP_STRUCT_Objective_FWDDECL)
#include <Modloader/app/structs/Objective.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Objective.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
