#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_DEFINED
struct TextStyleCollection;
struct MessageBoxLanguageStyles__Fields {
    struct ScriptableObject__Fields _;
    struct TextStyleCollection* English;
    struct TextStyleCollection* German;
    struct TextStyleCollection* Spanish;
    struct TextStyleCollection* French;
    struct TextStyleCollection* Italian;
    struct TextStyleCollection* Portuguese;
    struct TextStyleCollection* Russian;
    int32_t Space;
    struct TextStyleCollection* Japanese;
    struct TextStyleCollection* Chinese;
    struct TextStyleCollection* TraditionalChinese;
    struct TextStyleCollection* Czech;
    struct TextStyleCollection* Danish;
    struct TextStyleCollection* Dutch;
    struct TextStyleCollection* Finnish;
    struct TextStyleCollection* Hungarian;
    struct TextStyleCollection* Korean;
    struct TextStyleCollection* Norwegian;
    struct TextStyleCollection* Polish;
    struct TextStyleCollection* SpanishSpain;
    struct TextStyleCollection* Swedish;
    struct TextStyleCollection* Turkish;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_FWDDECL
#include <Modloader/app/structs/TextStyleCollection.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_FWDDECL)
#include <Modloader/app/structs/MessageBoxLanguageStyles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxLanguageStyles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
