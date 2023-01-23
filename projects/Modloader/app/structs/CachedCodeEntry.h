#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedCodeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedCodeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedCodeEntry_DEFINED)
#include <Modloader/app/structs/CachedCodeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_CachedCodeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_CachedCodeEntry_DEFINED
struct CachedCodeEntry__Class;
struct CachedCodeEntry {
    struct CachedCodeEntry__Class* klass;
    MonitorData* monitor;
    struct CachedCodeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CachedCodeEntry_FWDDECL)
#define IL2CPP_STRUCT_CachedCodeEntry_FWDDECL
#include <Modloader/app/structs/CachedCodeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_CachedCodeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedCodeEntry_DEFINED) && !defined(IL2CPP_STRUCT_CachedCodeEntry_FWDDECL)
#include <Modloader/app/structs/CachedCodeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedCodeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
