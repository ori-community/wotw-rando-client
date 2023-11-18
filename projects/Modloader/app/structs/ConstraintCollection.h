#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintCollection_DEFINED)
#include <Modloader/app/structs/ConstraintCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintCollection_DEFINED
struct ConstraintCollection__Class;
struct ConstraintCollection {
    struct ConstraintCollection__Class* klass;
    MonitorData* monitor;
    struct ConstraintCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintCollection_FWDDECL)
#define IL2CPP_STRUCT_ConstraintCollection_FWDDECL
#include <Modloader/app/structs/ConstraintCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintCollection_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintCollection_FWDDECL)
#include <Modloader/app/structs/ConstraintCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
