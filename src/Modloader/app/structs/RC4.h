#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC4_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC4_DEFINED)
#include <Modloader/app/structs/RC4__Fields.h>
#if defined(IL2CPP_STRUCT_RC4__Fields_DEFINED)
#define IL2CPP_STRUCT_RC4_DEFINED
struct RC4__Class;
struct RC4 {
    struct RC4__Class* klass;
    MonitorData* monitor;
    struct RC4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC4_FWDDECL)
#define IL2CPP_STRUCT_RC4_FWDDECL
#include <Modloader/app/structs/RC4__Class.h>
#endif
#undef IL2CPP_STRUCT_RC4_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC4_DEFINED) && !defined(IL2CPP_STRUCT_RC4_FWDDECL)
#include <Modloader/app/structs/RC4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
