#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AccessViolationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AccessViolationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AccessViolationException_DEFINED)
#include <Modloader/app/structs/AccessViolationException__Fields.h>
#if defined(IL2CPP_STRUCT_AccessViolationException__Fields_DEFINED)
#define IL2CPP_STRUCT_AccessViolationException_DEFINED
struct AccessViolationException__Class;
struct AccessViolationException {
    struct AccessViolationException__Class* klass;
    MonitorData* monitor;
    struct AccessViolationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AccessViolationException_FWDDECL)
#define IL2CPP_STRUCT_AccessViolationException_FWDDECL
#include <Modloader/app/structs/AccessViolationException__Class.h>
#endif
#undef IL2CPP_STRUCT_AccessViolationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AccessViolationException_DEFINED) && !defined(IL2CPP_STRUCT_AccessViolationException_FWDDECL)
#include <Modloader/app/structs/AccessViolationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AccessViolationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
