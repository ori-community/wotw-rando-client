#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Grounder__Fields_DEFINED
struct Grounding;
struct Grounder_GrounderDelegate;
struct Grounder__Fields {
    struct MonoBehaviour__Fields _;
    float weight;
    struct Grounding* solver;
    struct Grounder_GrounderDelegate* OnPreGrounder;
    struct Grounder_GrounderDelegate* OnPostGrounder;
    bool initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounder__Fields_FWDDECL)
#define IL2CPP_STRUCT_Grounder__Fields_FWDDECL
#include <Modloader/app/structs/Grounder_GrounderDelegate.h>
#include <Modloader/app/structs/Grounding.h>
#endif
#undef IL2CPP_STRUCT_Grounder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Grounder__Fields_FWDDECL)
#include <Modloader/app/structs/Grounder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
