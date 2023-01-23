#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageToggler_DEFINED)
#include <Modloader/app/structs/LanguageToggler__Fields.h>
#if defined(IL2CPP_STRUCT_LanguageToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageToggler_DEFINED
struct LanguageToggler__Class;
struct LanguageToggler {
    struct LanguageToggler__Class* klass;
    MonitorData* monitor;
    struct LanguageToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageToggler_FWDDECL)
#define IL2CPP_STRUCT_LanguageToggler_FWDDECL
#include <Modloader/app/structs/LanguageToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_LanguageToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageToggler_DEFINED) && !defined(IL2CPP_STRUCT_LanguageToggler_FWDDECL)
#include <Modloader/app/structs/LanguageToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
