#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedTextProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedTextProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MaskedTextProvider__StaticFields_DEFINED
struct Type;
struct MaskedTextProvider__StaticFields {
    int32_t ASCII_ONLY;
    int32_t ALLOW_PROMPT_AS_INPUT;
    int32_t INCLUDE_PROMPT;
    int32_t INCLUDE_LITERALS;
    int32_t RESET_ON_PROMPT;
    int32_t RESET_ON_LITERALS;
    int32_t SKIP_SPACE;
    struct Type* maskTextProviderType;
};
#endif
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MaskedTextProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MaskedTextProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MaskedTextProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/MaskedTextProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedTextProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
