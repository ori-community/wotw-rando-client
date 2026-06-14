#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHighlightLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHighlightLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic_DEFINED)
#include <Modloader/app/structs/EntityHighlightLogic__Fields.h>
#if defined(IL2CPP_STRUCT_EntityHighlightLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHighlightLogic_DEFINED
struct EntityHighlightLogic__Class;
struct EntityHighlightLogic {
    struct EntityHighlightLogic__Class* klass;
    MonitorData* monitor;
    struct EntityHighlightLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic_FWDDECL)
#define IL2CPP_STRUCT_EntityHighlightLogic_FWDDECL
#include <Modloader/app/structs/EntityHighlightLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityHighlightLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic_DEFINED) && !defined(IL2CPP_STRUCT_EntityHighlightLogic_FWDDECL)
#include <Modloader/app/structs/EntityHighlightLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHighlightLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
