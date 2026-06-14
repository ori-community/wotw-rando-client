#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletSkinningModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletSkinningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSkinningModifier_DEFINED)
#include <Modloader/app/structs/VerletSkinningModifier__Fields.h>
#if defined(IL2CPP_STRUCT_VerletSkinningModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletSkinningModifier_DEFINED
struct VerletSkinningModifier__Class;
struct VerletSkinningModifier {
    struct VerletSkinningModifier__Class* klass;
    MonitorData* monitor;
    struct VerletSkinningModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletSkinningModifier_FWDDECL)
#define IL2CPP_STRUCT_VerletSkinningModifier_FWDDECL
#include <Modloader/app/structs/VerletSkinningModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletSkinningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSkinningModifier_DEFINED) && !defined(IL2CPP_STRUCT_VerletSkinningModifier_FWDDECL)
#include <Modloader/app/structs/VerletSkinningModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletSkinningModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
