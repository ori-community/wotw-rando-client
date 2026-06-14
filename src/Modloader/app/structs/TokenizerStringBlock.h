#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerStringBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerStringBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock_DEFINED)
#include <Modloader/app/structs/TokenizerStringBlock__Fields.h>
#if defined(IL2CPP_STRUCT_TokenizerStringBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerStringBlock_DEFINED
struct TokenizerStringBlock__Class;
struct TokenizerStringBlock {
    struct TokenizerStringBlock__Class* klass;
    MonitorData* monitor;
    struct TokenizerStringBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock_FWDDECL)
#define IL2CPP_STRUCT_TokenizerStringBlock_FWDDECL
#include <Modloader/app/structs/TokenizerStringBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_TokenizerStringBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStringBlock_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerStringBlock_FWDDECL)
#include <Modloader/app/structs/TokenizerStringBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerStringBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
