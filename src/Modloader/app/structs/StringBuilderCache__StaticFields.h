#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuilderCache__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuilderCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderCache__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StringBuilderCache__StaticFields_DEFINED
struct StringBuilder;
struct StringBuilderCache__StaticFields {
    struct StringBuilder* CachedInstance;
};
#endif
#if !defined(IL2CPP_STRUCT_StringBuilderCache__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StringBuilderCache__StaticFields_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_StringBuilderCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderCache__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StringBuilderCache__StaticFields_FWDDECL)
#include <Modloader/app/structs/StringBuilderCache__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuilderCache__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
