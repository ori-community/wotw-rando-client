#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageOptions_DEFINED)
#include <Modloader/app/structs/LanguageOptions__Fields.h>
#if defined(IL2CPP_STRUCT_LanguageOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageOptions_DEFINED
struct LanguageOptions__Class;
struct LanguageOptions {
    struct LanguageOptions__Class* klass;
    MonitorData* monitor;
    struct LanguageOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageOptions_FWDDECL)
#define IL2CPP_STRUCT_LanguageOptions_FWDDECL
#include <Modloader/app/structs/LanguageOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_LanguageOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageOptions_DEFINED) && !defined(IL2CPP_STRUCT_LanguageOptions_FWDDECL)
#include <Modloader/app/structs/LanguageOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
