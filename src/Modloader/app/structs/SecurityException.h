#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityException_DEFINED)
#include <Modloader/app/structs/SecurityException__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityException__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityException_DEFINED
struct SecurityException__Class;
struct SecurityException {
    struct SecurityException__Class* klass;
    MonitorData* monitor;
    struct SecurityException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityException_FWDDECL)
#define IL2CPP_STRUCT_SecurityException_FWDDECL
#include <Modloader/app/structs/SecurityException__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityException_DEFINED) && !defined(IL2CPP_STRUCT_SecurityException_FWDDECL)
#include <Modloader/app/structs/SecurityException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
