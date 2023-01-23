#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TranslateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TranslateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslateModifier_DEFINED)
#include <Modloader/app/structs/TranslateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TranslateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TranslateModifier_DEFINED
struct TranslateModifier__Class;
struct TranslateModifier {
    struct TranslateModifier__Class* klass;
    MonitorData* monitor;
    struct TranslateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TranslateModifier_FWDDECL)
#define IL2CPP_STRUCT_TranslateModifier_FWDDECL
#include <Modloader/app/structs/TranslateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TranslateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslateModifier_DEFINED) && !defined(IL2CPP_STRUCT_TranslateModifier_FWDDECL)
#include <Modloader/app/structs/TranslateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TranslateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
