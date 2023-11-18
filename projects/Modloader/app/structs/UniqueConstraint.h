#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UniqueConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UniqueConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint_DEFINED)
#include <Modloader/app/structs/UniqueConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_UniqueConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_UniqueConstraint_DEFINED
struct UniqueConstraint__Class;
struct UniqueConstraint {
    struct UniqueConstraint__Class* klass;
    MonitorData* monitor;
    struct UniqueConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UniqueConstraint_FWDDECL)
#define IL2CPP_STRUCT_UniqueConstraint_FWDDECL
#include <Modloader/app/structs/UniqueConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_UniqueConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint_DEFINED) && !defined(IL2CPP_STRUCT_UniqueConstraint_FWDDECL)
#include <Modloader/app/structs/UniqueConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UniqueConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
