#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexFC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexFC_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFC_DEFINED)
#include <Modloader/app/structs/RegexFC__Fields.h>
#if defined(IL2CPP_STRUCT_RegexFC__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexFC_DEFINED
struct RegexFC__Class;
struct RegexFC {
    struct RegexFC__Class* klass;
    MonitorData* monitor;
    struct RegexFC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexFC_FWDDECL)
#define IL2CPP_STRUCT_RegexFC_FWDDECL
#include <Modloader/app/structs/RegexFC__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexFC_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFC_DEFINED) && !defined(IL2CPP_STRUCT_RegexFC_FWDDECL)
#include <Modloader/app/structs/RegexFC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexFC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
