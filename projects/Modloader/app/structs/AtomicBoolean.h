#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtomicBoolean_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtomicBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtomicBoolean_DEFINED)
#include <Modloader/app/structs/AtomicBoolean__Fields.h>
#if defined(IL2CPP_STRUCT_AtomicBoolean__Fields_DEFINED)
#define IL2CPP_STRUCT_AtomicBoolean_DEFINED
struct AtomicBoolean__Class;
struct AtomicBoolean {
    struct AtomicBoolean__Class* klass;
    MonitorData* monitor;
    struct AtomicBoolean__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtomicBoolean_FWDDECL)
#define IL2CPP_STRUCT_AtomicBoolean_FWDDECL
#include <Modloader/app/structs/AtomicBoolean__Class.h>
#endif
#undef IL2CPP_STRUCT_AtomicBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtomicBoolean_DEFINED) && !defined(IL2CPP_STRUCT_AtomicBoolean_FWDDECL)
#include <Modloader/app/structs/AtomicBoolean.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtomicBoolean.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
