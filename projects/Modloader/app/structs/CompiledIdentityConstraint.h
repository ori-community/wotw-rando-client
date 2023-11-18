#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompiledIdentityConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompiledIdentityConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint_DEFINED)
#include <Modloader/app/structs/CompiledIdentityConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_CompiledIdentityConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_CompiledIdentityConstraint_DEFINED
struct CompiledIdentityConstraint__Class;
struct CompiledIdentityConstraint {
    struct CompiledIdentityConstraint__Class* klass;
    MonitorData* monitor;
    struct CompiledIdentityConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint_FWDDECL)
#define IL2CPP_STRUCT_CompiledIdentityConstraint_FWDDECL
#include <Modloader/app/structs/CompiledIdentityConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_CompiledIdentityConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompiledIdentityConstraint_DEFINED) && !defined(IL2CPP_STRUCT_CompiledIdentityConstraint_FWDDECL)
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
