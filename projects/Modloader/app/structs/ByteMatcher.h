#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteMatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteMatcher_DEFINED)
#include <Modloader/app/structs/ByteMatcher__Fields.h>
#if defined(IL2CPP_STRUCT_ByteMatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteMatcher_DEFINED
struct ByteMatcher__Class;
struct ByteMatcher {
    struct ByteMatcher__Class* klass;
    MonitorData* monitor;
    struct ByteMatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteMatcher_FWDDECL)
#define IL2CPP_STRUCT_ByteMatcher_FWDDECL
#include <Modloader/app/structs/ByteMatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteMatcher_DEFINED) && !defined(IL2CPP_STRUCT_ByteMatcher_FWDDECL)
#include <Modloader/app/structs/ByteMatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteMatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
