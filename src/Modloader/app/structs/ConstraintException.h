#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintException_DEFINED)
#include <Modloader/app/structs/ConstraintException__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintException__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintException_DEFINED
struct ConstraintException__Class;
struct ConstraintException {
    struct ConstraintException__Class* klass;
    MonitorData* monitor;
    struct ConstraintException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintException_FWDDECL)
#define IL2CPP_STRUCT_ConstraintException_FWDDECL
#include <Modloader/app/structs/ConstraintException__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintException_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintException_FWDDECL)
#include <Modloader/app/structs/ConstraintException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
