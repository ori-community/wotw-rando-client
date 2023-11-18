#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinningModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningModifier_DEFINED)
#include <Modloader/app/structs/SkinningModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SkinningModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SkinningModifier_DEFINED
struct SkinningModifier__Class;
struct SkinningModifier {
    struct SkinningModifier__Class* klass;
    MonitorData* monitor;
    struct SkinningModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinningModifier_FWDDECL)
#define IL2CPP_STRUCT_SkinningModifier_FWDDECL
#include <Modloader/app/structs/SkinningModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SkinningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningModifier_DEFINED) && !defined(IL2CPP_STRUCT_SkinningModifier_FWDDECL)
#include <Modloader/app/structs/SkinningModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinningModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
