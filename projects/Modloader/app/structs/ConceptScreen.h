#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConceptScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConceptScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen_DEFINED)
#include <Modloader/app/structs/ConceptScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ConceptScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_ConceptScreen_DEFINED
struct ConceptScreen__Class;
struct ConceptScreen {
    struct ConceptScreen__Class* klass;
    MonitorData* monitor;
    struct ConceptScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConceptScreen_FWDDECL)
#define IL2CPP_STRUCT_ConceptScreen_FWDDECL
#include <Modloader/app/structs/ConceptScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_ConceptScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen_DEFINED) && !defined(IL2CPP_STRUCT_ConceptScreen_FWDDECL)
#include <Modloader/app/structs/ConceptScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConceptScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
