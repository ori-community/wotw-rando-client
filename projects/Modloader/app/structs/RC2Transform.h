#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2Transform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform_DEFINED)
#include <Modloader/app/structs/RC2Transform__Fields.h>
#if defined(IL2CPP_STRUCT_RC2Transform__Fields_DEFINED)
#define IL2CPP_STRUCT_RC2Transform_DEFINED
struct RC2Transform__Class;
struct RC2Transform {
    struct RC2Transform__Class* klass;
    MonitorData* monitor;
    struct RC2Transform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC2Transform_FWDDECL)
#define IL2CPP_STRUCT_RC2Transform_FWDDECL
#include <Modloader/app/structs/RC2Transform__Class.h>
#endif
#undef IL2CPP_STRUCT_RC2Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform_DEFINED) && !defined(IL2CPP_STRUCT_RC2Transform_FWDDECL)
#include <Modloader/app/structs/RC2Transform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2Transform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
