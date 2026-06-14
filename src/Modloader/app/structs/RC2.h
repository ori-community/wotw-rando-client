#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2_DEFINED)
#include <Modloader/app/structs/RC2__Fields.h>
#if defined(IL2CPP_STRUCT_RC2__Fields_DEFINED)
#define IL2CPP_STRUCT_RC2_DEFINED
struct RC2__Class;
struct RC2 {
    struct RC2__Class* klass;
    MonitorData* monitor;
    struct RC2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC2_FWDDECL)
#define IL2CPP_STRUCT_RC2_FWDDECL
#include <Modloader/app/structs/RC2__Class.h>
#endif
#undef IL2CPP_STRUCT_RC2_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2_DEFINED) && !defined(IL2CPP_STRUCT_RC2_FWDDECL)
#include <Modloader/app/structs/RC2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
