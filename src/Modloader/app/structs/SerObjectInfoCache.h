#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerObjectInfoCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerObjectInfoCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoCache_DEFINED)
#include <Modloader/app/structs/SerObjectInfoCache__Fields.h>
#if defined(IL2CPP_STRUCT_SerObjectInfoCache__Fields_DEFINED)
#define IL2CPP_STRUCT_SerObjectInfoCache_DEFINED
struct SerObjectInfoCache__Class;
struct SerObjectInfoCache {
    struct SerObjectInfoCache__Class* klass;
    MonitorData* monitor;
    struct SerObjectInfoCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerObjectInfoCache_FWDDECL)
#define IL2CPP_STRUCT_SerObjectInfoCache_FWDDECL
#include <Modloader/app/structs/SerObjectInfoCache__Class.h>
#endif
#undef IL2CPP_STRUCT_SerObjectInfoCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoCache_DEFINED) && !defined(IL2CPP_STRUCT_SerObjectInfoCache_FWDDECL)
#include <Modloader/app/structs/SerObjectInfoCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerObjectInfoCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
