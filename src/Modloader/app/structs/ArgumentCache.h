#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentCache_DEFINED)
#include <Modloader/app/structs/ArgumentCache__Fields.h>
#if defined(IL2CPP_STRUCT_ArgumentCache__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgumentCache_DEFINED
struct ArgumentCache__Class;
struct ArgumentCache {
    struct ArgumentCache__Class* klass;
    MonitorData* monitor;
    struct ArgumentCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgumentCache_FWDDECL)
#define IL2CPP_STRUCT_ArgumentCache_FWDDECL
#include <Modloader/app/structs/ArgumentCache__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgumentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentCache_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentCache_FWDDECL)
#include <Modloader/app/structs/ArgumentCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
