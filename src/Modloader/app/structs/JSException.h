#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSException_DEFINED)
#include <Modloader/app/structs/JSException__Fields.h>
#if defined(IL2CPP_STRUCT_JSException__Fields_DEFINED)
#define IL2CPP_STRUCT_JSException_DEFINED
struct JSException__Class;
struct JSException {
    struct JSException__Class* klass;
    MonitorData* monitor;
    struct JSException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JSException_FWDDECL)
#define IL2CPP_STRUCT_JSException_FWDDECL
#include <Modloader/app/structs/JSException__Class.h>
#endif
#undef IL2CPP_STRUCT_JSException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSException_DEFINED) && !defined(IL2CPP_STRUCT_JSException_FWDDECL)
#include <Modloader/app/structs/JSException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
