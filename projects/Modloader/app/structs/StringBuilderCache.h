#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuilderCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuilderCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderCache_DEFINED)
#define IL2CPP_STRUCT_StringBuilderCache_DEFINED
struct StringBuilderCache__Class;
struct StringBuilderCache {
    struct StringBuilderCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringBuilderCache_FWDDECL)
#define IL2CPP_STRUCT_StringBuilderCache_FWDDECL
#include <Modloader/app/structs/StringBuilderCache__Class.h>
#endif
#undef IL2CPP_STRUCT_StringBuilderCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderCache_DEFINED) && !defined(IL2CPP_STRUCT_StringBuilderCache_FWDDECL)
#include <Modloader/app/structs/StringBuilderCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuilderCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
