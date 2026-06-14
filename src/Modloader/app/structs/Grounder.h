#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounder_DEFINED)
#include <Modloader/app/structs/Grounder__Fields.h>
#if defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED)
#define IL2CPP_STRUCT_Grounder_DEFINED
struct Grounder__Class;
struct Grounder {
    struct Grounder__Class* klass;
    MonitorData* monitor;
    struct Grounder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounder_FWDDECL)
#define IL2CPP_STRUCT_Grounder_FWDDECL
#include <Modloader/app/structs/Grounder__Class.h>
#endif
#undef IL2CPP_STRUCT_Grounder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounder_DEFINED) && !defined(IL2CPP_STRUCT_Grounder_FWDDECL)
#include <Modloader/app/structs/Grounder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
