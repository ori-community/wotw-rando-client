#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLeached_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLeached_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeached_DEFINED)
#include <Modloader/app/structs/SeinLeached__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLeached__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLeached_DEFINED
struct SeinLeached__Class;
struct SeinLeached {
    struct SeinLeached__Class* klass;
    MonitorData* monitor;
    struct SeinLeached__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLeached_FWDDECL)
#define IL2CPP_STRUCT_SeinLeached_FWDDECL
#include <Modloader/app/structs/SeinLeached__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLeached_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeached_DEFINED) && !defined(IL2CPP_STRUCT_SeinLeached_FWDDECL)
#include <Modloader/app/structs/SeinLeached.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLeached.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
