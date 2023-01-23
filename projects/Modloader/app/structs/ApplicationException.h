#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationException_DEFINED)
#include <Modloader/app/structs/ApplicationException__Fields.h>
#if defined(IL2CPP_STRUCT_ApplicationException__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplicationException_DEFINED
struct ApplicationException__Class;
struct ApplicationException {
    struct ApplicationException__Class* klass;
    MonitorData* monitor;
    struct ApplicationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplicationException_FWDDECL)
#define IL2CPP_STRUCT_ApplicationException_FWDDECL
#include <Modloader/app/structs/ApplicationException__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationException_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationException_FWDDECL)
#include <Modloader/app/structs/ApplicationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
