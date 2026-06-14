#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStream__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerStream__Fields_DEFINED
struct TokenizerShortBlock;
struct TokenizerStringBlock;
struct __declspec(align(8)) TokenizerStream__Fields {
    int32_t m_countTokens;
    struct TokenizerShortBlock* m_headTokens;
    struct TokenizerShortBlock* m_lastTokens;
    struct TokenizerShortBlock* m_currentTokens;
    int32_t m_indexTokens;
    struct TokenizerStringBlock* m_headStrings;
    struct TokenizerStringBlock* m_currentStrings;
    int32_t m_indexStrings;
};
#endif
#if !defined(IL2CPP_STRUCT_TokenizerStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_TokenizerStream__Fields_FWDDECL
#include <Modloader/app/structs/TokenizerShortBlock.h>
#include <Modloader/app/structs/TokenizerStringBlock.h>
#endif
#undef IL2CPP_STRUCT_TokenizerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerStream__Fields_FWDDECL)
#include <Modloader/app/structs/TokenizerStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
