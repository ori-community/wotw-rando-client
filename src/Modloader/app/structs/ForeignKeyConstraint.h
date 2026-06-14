#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForeignKeyConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForeignKeyConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint_DEFINED)
#include <Modloader/app/structs/ForeignKeyConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_ForeignKeyConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_ForeignKeyConstraint_DEFINED
struct ForeignKeyConstraint__Class;
struct ForeignKeyConstraint {
    struct ForeignKeyConstraint__Class* klass;
    MonitorData* monitor;
    struct ForeignKeyConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint_FWDDECL)
#define IL2CPP_STRUCT_ForeignKeyConstraint_FWDDECL
#include <Modloader/app/structs/ForeignKeyConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_ForeignKeyConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForeignKeyConstraint_DEFINED) && !defined(IL2CPP_STRUCT_ForeignKeyConstraint_FWDDECL)
#include <Modloader/app/structs/ForeignKeyConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForeignKeyConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
