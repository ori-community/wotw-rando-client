#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringArrayPref__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringArrayPref__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringArrayPref__Fields_DEFINED)
#define IL2CPP_STRUCT_StringArrayPref__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) StringArrayPref__Fields {
    struct String* m_key;
    struct String* m_value;
    struct String__Array* m_values;
};
#endif
#if !defined(IL2CPP_STRUCT_StringArrayPref__Fields_FWDDECL)
#define IL2CPP_STRUCT_StringArrayPref__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_StringArrayPref__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringArrayPref__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StringArrayPref__Fields_FWDDECL)
#include <Modloader/app/structs/StringArrayPref__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringArrayPref__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
