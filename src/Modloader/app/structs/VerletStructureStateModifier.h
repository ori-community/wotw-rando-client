#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructureStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructureStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureStateModifier_DEFINED)
#include <Modloader/app/structs/VerletStructureStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructureStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructureStateModifier_DEFINED
struct VerletStructureStateModifier__Class;
struct VerletStructureStateModifier {
    struct VerletStructureStateModifier__Class* klass;
    MonitorData* monitor;
    struct VerletStructureStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructureStateModifier_FWDDECL)
#define IL2CPP_STRUCT_VerletStructureStateModifier_FWDDECL
#include <Modloader/app/structs/VerletStructureStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructureStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructureStateModifier_FWDDECL)
#include <Modloader/app/structs/VerletStructureStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructureStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
