#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringComparer_DEFINED)
#define IL2CPP_STRUCT_StringComparer_DEFINED
struct StringComparer__Class;
struct StringComparer {
    struct StringComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringComparer_FWDDECL)
#define IL2CPP_STRUCT_StringComparer_FWDDECL
#include <Modloader/app/structs/StringComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_StringComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringComparer_DEFINED) && !defined(IL2CPP_STRUCT_StringComparer_FWDDECL)
#include <Modloader/app/structs/StringComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
