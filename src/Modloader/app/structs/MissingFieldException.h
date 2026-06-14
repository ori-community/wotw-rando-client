#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MissingFieldException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MissingFieldException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingFieldException_DEFINED)
#include <Modloader/app/structs/MissingFieldException__Fields.h>
#if defined(IL2CPP_STRUCT_MissingFieldException__Fields_DEFINED)
#define IL2CPP_STRUCT_MissingFieldException_DEFINED
struct MissingFieldException__Class;
struct MissingFieldException {
    struct MissingFieldException__Class* klass;
    MonitorData* monitor;
    struct MissingFieldException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MissingFieldException_FWDDECL)
#define IL2CPP_STRUCT_MissingFieldException_FWDDECL
#include <Modloader/app/structs/MissingFieldException__Class.h>
#endif
#undef IL2CPP_STRUCT_MissingFieldException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingFieldException_DEFINED) && !defined(IL2CPP_STRUCT_MissingFieldException_FWDDECL)
#include <Modloader/app/structs/MissingFieldException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MissingFieldException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
