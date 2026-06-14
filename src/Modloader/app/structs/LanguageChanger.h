#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageChanger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageChanger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageChanger_DEFINED)
#include <Modloader/app/structs/LanguageChanger__Fields.h>
#if defined(IL2CPP_STRUCT_LanguageChanger__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageChanger_DEFINED
struct LanguageChanger__Class;
struct LanguageChanger {
    struct LanguageChanger__Class* klass;
    MonitorData* monitor;
    struct LanguageChanger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageChanger_FWDDECL)
#define IL2CPP_STRUCT_LanguageChanger_FWDDECL
#include <Modloader/app/structs/LanguageChanger__Class.h>
#endif
#undef IL2CPP_STRUCT_LanguageChanger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageChanger_DEFINED) && !defined(IL2CPP_STRUCT_LanguageChanger_FWDDECL)
#include <Modloader/app/structs/LanguageChanger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageChanger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
