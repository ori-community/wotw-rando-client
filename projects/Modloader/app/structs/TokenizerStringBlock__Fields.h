#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerStringBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerStringBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerStringBlock__Fields_DEFINED
struct String__Array;
struct TokenizerStringBlock;
struct __declspec(align(8)) TokenizerStringBlock__Fields {
    struct String__Array* m_block;
    struct TokenizerStringBlock* m_next;
};
#endif
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_TokenizerStringBlock__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TokenizerStringBlock.h>
#endif
#undef IL2CPP_STRUCT_TokenizerStringBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerStringBlock__Fields_FWDDECL)
#include <Modloader/app/structs/TokenizerStringBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerStringBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
