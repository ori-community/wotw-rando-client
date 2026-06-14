#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodAccessException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodAccessException_DEFINED)
#include <Modloader/app/structs/MethodAccessException__Fields.h>
#if defined(IL2CPP_STRUCT_MethodAccessException__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodAccessException_DEFINED
struct MethodAccessException__Class;
struct MethodAccessException {
    struct MethodAccessException__Class* klass;
    MonitorData* monitor;
    struct MethodAccessException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodAccessException_FWDDECL)
#define IL2CPP_STRUCT_MethodAccessException_FWDDECL
#include <Modloader/app/structs/MethodAccessException__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodAccessException_DEFINED) && !defined(IL2CPP_STRUCT_MethodAccessException_FWDDECL)
#include <Modloader/app/structs/MethodAccessException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodAccessException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
