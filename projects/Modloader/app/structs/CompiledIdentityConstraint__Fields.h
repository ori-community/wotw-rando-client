#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_DEFINED)
#include <Modloader/app/structs/CompiledIdentityConstraint_ConstraintRole__Enum.h>
#if defined(IL2CPP_STRUCT_CompiledIdentityConstraint_ConstraintRole__Enum_DEFINED)
#define IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_DEFINED
struct XmlQualifiedName;
struct Asttree;
struct Asttree__Array;
struct __declspec(align(8)) CompiledIdentityConstraint__Fields {
    struct XmlQualifiedName* name;
    CompiledIdentityConstraint_ConstraintRole__Enum role;

    struct Asttree* selector;
    struct Asttree__Array* fields;
    struct XmlQualifiedName* refer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_FWDDECL
#include <Modloader/app/structs/Asttree.h>
#include <Modloader/app/structs/Asttree__Array.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/CompiledIdentityConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompiledIdentityConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
