#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerShortBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerShortBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerShortBlock__Fields_DEFINED
struct Int16__Array;
struct TokenizerShortBlock;
struct __declspec(align(8)) TokenizerShortBlock__Fields {
    struct Int16__Array* m_block;
    struct TokenizerShortBlock* m_next;
};
#endif
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_TokenizerShortBlock__Fields_FWDDECL
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/TokenizerShortBlock.h>
#endif
#undef IL2CPP_STRUCT_TokenizerShortBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerShortBlock__Fields_FWDDECL)
#include <Modloader/app/structs/TokenizerShortBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerShortBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
