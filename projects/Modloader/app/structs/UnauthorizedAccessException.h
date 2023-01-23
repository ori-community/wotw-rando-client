#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnauthorizedAccessException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnauthorizedAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnauthorizedAccessException_DEFINED)
#include <Modloader/app/structs/UnauthorizedAccessException__Fields.h>
#if defined(IL2CPP_STRUCT_UnauthorizedAccessException__Fields_DEFINED)
#define IL2CPP_STRUCT_UnauthorizedAccessException_DEFINED
struct UnauthorizedAccessException__Class;
struct UnauthorizedAccessException {
    struct UnauthorizedAccessException__Class* klass;
    MonitorData* monitor;
    struct UnauthorizedAccessException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnauthorizedAccessException_FWDDECL)
#define IL2CPP_STRUCT_UnauthorizedAccessException_FWDDECL
#include <Modloader/app/structs/UnauthorizedAccessException__Class.h>
#endif
#undef IL2CPP_STRUCT_UnauthorizedAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnauthorizedAccessException_DEFINED) && !defined(IL2CPP_STRUCT_UnauthorizedAccessException_FWDDECL)
#include <Modloader/app/structs/UnauthorizedAccessException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnauthorizedAccessException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
