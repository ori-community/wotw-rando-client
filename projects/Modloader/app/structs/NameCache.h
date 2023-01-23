#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameCache_DEFINED)
#include <Modloader/app/structs/NameCache__Fields.h>
#if defined(IL2CPP_STRUCT_NameCache__Fields_DEFINED)
#define IL2CPP_STRUCT_NameCache_DEFINED
struct NameCache__Class;
struct NameCache {
    struct NameCache__Class* klass;
    MonitorData* monitor;
    struct NameCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameCache_FWDDECL)
#define IL2CPP_STRUCT_NameCache_FWDDECL
#include <Modloader/app/structs/NameCache__Class.h>
#endif
#undef IL2CPP_STRUCT_NameCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameCache_DEFINED) && !defined(IL2CPP_STRUCT_NameCache_FWDDECL)
#include <Modloader/app/structs/NameCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
