#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuilderUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuilderUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderUtility_DEFINED)
#define IL2CPP_STRUCT_StringBuilderUtility_DEFINED
struct StringBuilderUtility__Class;
struct StringBuilderUtility {
    struct StringBuilderUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringBuilderUtility_FWDDECL)
#define IL2CPP_STRUCT_StringBuilderUtility_FWDDECL
#include <Modloader/app/structs/StringBuilderUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_StringBuilderUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilderUtility_DEFINED) && !defined(IL2CPP_STRUCT_StringBuilderUtility_FWDDECL)
#include <Modloader/app/structs/StringBuilderUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuilderUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
