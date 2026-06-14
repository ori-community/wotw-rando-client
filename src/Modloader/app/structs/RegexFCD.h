#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexFCD_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexFCD_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFCD_DEFINED)
#include <Modloader/app/structs/RegexFCD__Fields.h>
#if defined(IL2CPP_STRUCT_RegexFCD__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexFCD_DEFINED
struct RegexFCD__Class;
struct RegexFCD {
    struct RegexFCD__Class* klass;
    MonitorData* monitor;
    struct RegexFCD__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexFCD_FWDDECL)
#define IL2CPP_STRUCT_RegexFCD_FWDDECL
#include <Modloader/app/structs/RegexFCD__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexFCD_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFCD_DEFINED) && !defined(IL2CPP_STRUCT_RegexFCD_FWDDECL)
#include <Modloader/app/structs/RegexFCD.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexFCD.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
