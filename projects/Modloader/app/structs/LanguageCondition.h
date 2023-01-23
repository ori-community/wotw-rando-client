#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageCondition_DEFINED)
#include <Modloader/app/structs/LanguageCondition__Fields.h>
#if defined(IL2CPP_STRUCT_LanguageCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageCondition_DEFINED
struct LanguageCondition__Class;
struct LanguageCondition {
    struct LanguageCondition__Class* klass;
    MonitorData* monitor;
    struct LanguageCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageCondition_FWDDECL)
#define IL2CPP_STRUCT_LanguageCondition_FWDDECL
#include <Modloader/app/structs/LanguageCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_LanguageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageCondition_DEFINED) && !defined(IL2CPP_STRUCT_LanguageCondition_FWDDECL)
#include <Modloader/app/structs/LanguageCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
