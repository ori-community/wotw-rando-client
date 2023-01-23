#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntPref_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPref_DEFINED)
#include <Modloader/app/structs/IntPref__Fields.h>
#if defined(IL2CPP_STRUCT_IntPref__Fields_DEFINED)
#define IL2CPP_STRUCT_IntPref_DEFINED
struct IntPref__Class;
struct IntPref {
    struct IntPref__Class* klass;
    MonitorData* monitor;
    struct IntPref__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntPref_FWDDECL)
#define IL2CPP_STRUCT_IntPref_FWDDECL
#include <Modloader/app/structs/IntPref__Class.h>
#endif
#undef IL2CPP_STRUCT_IntPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPref_DEFINED) && !defined(IL2CPP_STRUCT_IntPref_FWDDECL)
#include <Modloader/app/structs/IntPref.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntPref.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
