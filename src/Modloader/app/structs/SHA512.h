#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA512_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA512_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA512_DEFINED)
#include <Modloader/app/structs/SHA512__Fields.h>
#if defined(IL2CPP_STRUCT_SHA512__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA512_DEFINED
struct SHA512__Class;
struct SHA512 {
    struct SHA512__Class* klass;
    MonitorData* monitor;
    struct SHA512__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA512_FWDDECL)
#define IL2CPP_STRUCT_SHA512_FWDDECL
#include <Modloader/app/structs/SHA512__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA512_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA512_DEFINED) && !defined(IL2CPP_STRUCT_SHA512_FWDDECL)
#include <Modloader/app/structs/SHA512.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA512.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
