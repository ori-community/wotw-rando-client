#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidProgramException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidProgramException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidProgramException_DEFINED)
#include <Modloader/app/structs/InvalidProgramException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidProgramException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidProgramException_DEFINED
struct InvalidProgramException__Class;
struct InvalidProgramException {
    struct InvalidProgramException__Class* klass;
    MonitorData* monitor;
    struct InvalidProgramException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidProgramException_FWDDECL)
#define IL2CPP_STRUCT_InvalidProgramException_FWDDECL
#include <Modloader/app/structs/InvalidProgramException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidProgramException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidProgramException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidProgramException_FWDDECL)
#include <Modloader/app/structs/InvalidProgramException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidProgramException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
