#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringPref_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringPref_DEFINED)
#include <Modloader/app/structs/StringPref__Fields.h>
#if defined(IL2CPP_STRUCT_StringPref__Fields_DEFINED)
#define IL2CPP_STRUCT_StringPref_DEFINED
struct StringPref__Class;
struct StringPref {
    struct StringPref__Class* klass;
    MonitorData* monitor;
    struct StringPref__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringPref_FWDDECL)
#define IL2CPP_STRUCT_StringPref_FWDDECL
#include <Modloader/app/structs/StringPref__Class.h>
#endif
#undef IL2CPP_STRUCT_StringPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringPref_DEFINED) && !defined(IL2CPP_STRUCT_StringPref_FWDDECL)
#include <Modloader/app/structs/StringPref.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringPref.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
