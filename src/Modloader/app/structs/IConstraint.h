#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraint_DEFINED)
#define IL2CPP_STRUCT_IConstraint_DEFINED
struct IConstraint__Class;
struct IConstraint {
    struct IConstraint__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstraint_FWDDECL)
#define IL2CPP_STRUCT_IConstraint_FWDDECL
#include <Modloader/app/structs/IConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraint_DEFINED) && !defined(IL2CPP_STRUCT_IConstraint_FWDDECL)
#include <Modloader/app/structs/IConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
