#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA256_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA256_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256_DEFINED)
#include <Modloader/app/structs/SHA256__Fields.h>
#if defined(IL2CPP_STRUCT_SHA256__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA256_DEFINED
struct SHA256__Class;
struct SHA256 {
    struct SHA256__Class* klass;
    MonitorData* monitor;
    struct SHA256__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA256_FWDDECL)
#define IL2CPP_STRUCT_SHA256_FWDDECL
#include <Modloader/app/structs/SHA256__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA256_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256_DEFINED) && !defined(IL2CPP_STRUCT_SHA256_FWDDECL)
#include <Modloader/app/structs/SHA256.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA256.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
