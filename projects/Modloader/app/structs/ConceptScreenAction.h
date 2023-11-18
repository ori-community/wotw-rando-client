#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConceptScreenAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConceptScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreenAction_DEFINED)
#include <Modloader/app/structs/ConceptScreenAction__Fields.h>
#if defined(IL2CPP_STRUCT_ConceptScreenAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ConceptScreenAction_DEFINED
struct ConceptScreenAction__Class;
struct ConceptScreenAction {
    struct ConceptScreenAction__Class* klass;
    MonitorData* monitor;
    struct ConceptScreenAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConceptScreenAction_FWDDECL)
#define IL2CPP_STRUCT_ConceptScreenAction_FWDDECL
#include <Modloader/app/structs/ConceptScreenAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ConceptScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreenAction_DEFINED) && !defined(IL2CPP_STRUCT_ConceptScreenAction_FWDDECL)
#include <Modloader/app/structs/ConceptScreenAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConceptScreenAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
