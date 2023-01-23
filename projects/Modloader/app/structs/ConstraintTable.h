#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintTable_DEFINED)
#include <Modloader/app/structs/ConstraintTable__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintTable__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintTable_DEFINED
struct ConstraintTable__Class;
struct ConstraintTable {
    struct ConstraintTable__Class* klass;
    MonitorData* monitor;
    struct ConstraintTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintTable_FWDDECL)
#define IL2CPP_STRUCT_ConstraintTable_FWDDECL
#include <Modloader/app/structs/ConstraintTable__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintTable_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintTable_FWDDECL)
#include <Modloader/app/structs/ConstraintTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
