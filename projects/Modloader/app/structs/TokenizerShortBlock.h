#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerShortBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerShortBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock_DEFINED)
#include <Modloader/app/structs/TokenizerShortBlock__Fields.h>
#if defined(IL2CPP_STRUCT_TokenizerShortBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerShortBlock_DEFINED
struct TokenizerShortBlock__Class;
struct TokenizerShortBlock {
    struct TokenizerShortBlock__Class* klass;
    MonitorData* monitor;
    struct TokenizerShortBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock_FWDDECL)
#define IL2CPP_STRUCT_TokenizerShortBlock_FWDDECL
#include <Modloader/app/structs/TokenizerShortBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_TokenizerShortBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerShortBlock_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerShortBlock_FWDDECL)
#include <Modloader/app/structs/TokenizerShortBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerShortBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
