#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Certificate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Certificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Certificate_DEFINED)
#include <Modloader/app/structs/Certificate__Fields.h>
#if defined(IL2CPP_STRUCT_Certificate__Fields_DEFINED)
#define IL2CPP_STRUCT_Certificate_DEFINED
struct Certificate__Class;
struct Certificate {
    struct Certificate__Class* klass;
    MonitorData* monitor;
    struct Certificate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Certificate_FWDDECL)
#define IL2CPP_STRUCT_Certificate_FWDDECL
#include <Modloader/app/structs/Certificate__Class.h>
#endif
#undef IL2CPP_STRUCT_Certificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Certificate_DEFINED) && !defined(IL2CPP_STRUCT_Certificate_FWDDECL)
#include <Modloader/app/structs/Certificate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Certificate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
