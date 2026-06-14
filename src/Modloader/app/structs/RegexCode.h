#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexCode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexCode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCode_DEFINED)
#include <Modloader/app/structs/RegexCode__Fields.h>
#if defined(IL2CPP_STRUCT_RegexCode__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexCode_DEFINED
struct RegexCode__Class;
struct RegexCode {
    struct RegexCode__Class* klass;
    MonitorData* monitor;
    struct RegexCode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexCode_FWDDECL)
#define IL2CPP_STRUCT_RegexCode_FWDDECL
#include <Modloader/app/structs/RegexCode__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexCode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCode_DEFINED) && !defined(IL2CPP_STRUCT_RegexCode_FWDDECL)
#include <Modloader/app/structs/RegexCode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexCode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
