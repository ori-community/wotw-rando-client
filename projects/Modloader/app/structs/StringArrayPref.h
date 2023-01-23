#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringArrayPref_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringArrayPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringArrayPref_DEFINED)
#include <Modloader/app/structs/StringArrayPref__Fields.h>
#if defined(IL2CPP_STRUCT_StringArrayPref__Fields_DEFINED)
#define IL2CPP_STRUCT_StringArrayPref_DEFINED
struct StringArrayPref__Class;
struct StringArrayPref {
    struct StringArrayPref__Class* klass;
    MonitorData* monitor;
    struct StringArrayPref__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringArrayPref_FWDDECL)
#define IL2CPP_STRUCT_StringArrayPref_FWDDECL
#include <Modloader/app/structs/StringArrayPref__Class.h>
#endif
#undef IL2CPP_STRUCT_StringArrayPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringArrayPref_DEFINED) && !defined(IL2CPP_STRUCT_StringArrayPref_FWDDECL)
#include <Modloader/app/structs/StringArrayPref.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringArrayPref.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
