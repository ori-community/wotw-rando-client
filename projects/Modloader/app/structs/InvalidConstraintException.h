#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidConstraintException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidConstraintException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidConstraintException_DEFINED)
#include <Modloader/app/structs/InvalidConstraintException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidConstraintException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidConstraintException_DEFINED
struct InvalidConstraintException__Class;
struct InvalidConstraintException {
    struct InvalidConstraintException__Class* klass;
    MonitorData* monitor;
    struct InvalidConstraintException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidConstraintException_FWDDECL)
#define IL2CPP_STRUCT_InvalidConstraintException_FWDDECL
#include <Modloader/app/structs/InvalidConstraintException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidConstraintException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidConstraintException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidConstraintException_FWDDECL)
#include <Modloader/app/structs/InvalidConstraintException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidConstraintException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
