#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageOptions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageOptions__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageOptions__Fields_DEFINED
struct MessageProvider;
struct LanguageOptions__Fields {
    struct CleverMenuOptionsList__Fields _;
    struct MessageProvider* English;
    struct MessageProvider* French;
    struct MessageProvider* Italian;
    struct MessageProvider* German;
    struct MessageProvider* Spanish;
    struct MessageProvider* Japanese;
    struct MessageProvider* Portuguese;
    struct MessageProvider* Chinese;
    struct MessageProvider* Russian;
    struct MessageProvider* TraditionalChinese;
    struct MessageProvider* Czech;
    struct MessageProvider* Danish;
    struct MessageProvider* Dutch;
    struct MessageProvider* Finnish;
    struct MessageProvider* Hungarian;
    struct MessageProvider* Korean;
    struct MessageProvider* Norwegian;
    struct MessageProvider* Polish;
    struct MessageProvider* SpanishSpain;
    struct MessageProvider* Swedish;
    struct MessageProvider* Turkish;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageOptions__Fields_FWDDECL)
#define IL2CPP_STRUCT_LanguageOptions__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_LanguageOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageOptions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LanguageOptions__Fields_FWDDECL)
#include <Modloader/app/structs/LanguageOptions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageOptions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
