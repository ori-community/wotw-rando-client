#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringConcat__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringConcat__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConcat__Boxed_DEFINED)
#include <Modloader/app/structs/StringConcat.h>
#if defined(IL2CPP_STRUCT_StringConcat_DEFINED)
#define IL2CPP_STRUCT_StringConcat__Boxed_DEFINED
struct StringConcat__Class;
struct StringConcat__Boxed {
    struct StringConcat__Class* klass;
    MonitorData* monitor;
    struct StringConcat fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringConcat__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StringConcat__Boxed_FWDDECL
#include <Modloader/app/structs/StringConcat__Class.h>
#endif
#undef IL2CPP_STRUCT_StringConcat__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConcat__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StringConcat__Boxed_FWDDECL)
#include <Modloader/app/structs/StringConcat__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringConcat__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
