#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TranslatedMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TranslatedMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_DEFINED)
#include <Modloader/app/structs/TranslatedMessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TranslatedMessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TranslatedMessageProvider_DEFINED
struct TranslatedMessageProvider__Class;
struct TranslatedMessageProvider {
    struct TranslatedMessageProvider__Class* klass;
    MonitorData* monitor;
    struct TranslatedMessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_TranslatedMessageProvider_FWDDECL
#include <Modloader/app/structs/TranslatedMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TranslatedMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_TranslatedMessageProvider_FWDDECL)
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
