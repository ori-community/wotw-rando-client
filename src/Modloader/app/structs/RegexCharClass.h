#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexCharClass_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexCharClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass_DEFINED)
#include <Modloader/app/structs/RegexCharClass__Fields.h>
#if defined(IL2CPP_STRUCT_RegexCharClass__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexCharClass_DEFINED
struct RegexCharClass__Class;
struct RegexCharClass {
    struct RegexCharClass__Class* klass;
    MonitorData* monitor;
    struct RegexCharClass__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexCharClass_FWDDECL)
#define IL2CPP_STRUCT_RegexCharClass_FWDDECL
#include <Modloader/app/structs/RegexCharClass__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexCharClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass_DEFINED) && !defined(IL2CPP_STRUCT_RegexCharClass_FWDDECL)
#include <Modloader/app/structs/RegexCharClass.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexCharClass.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
