#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationToken_DEFINED)
#define IL2CPP_STRUCT_CancellationToken_DEFINED
struct CancellationTokenSource;
struct CancellationToken {
    struct CancellationTokenSource* m_source;
};
#endif
#if !defined(IL2CPP_STRUCT_CancellationToken_FWDDECL)
#define IL2CPP_STRUCT_CancellationToken_FWDDECL
#include <Modloader/app/structs/CancellationTokenSource.h>
#endif
#undef IL2CPP_STRUCT_CancellationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && !defined(IL2CPP_STRUCT_CancellationToken_FWDDECL)
#include <Modloader/app/structs/CancellationToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
