#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResultContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResultContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResultContext_DEFINED)
#include <Modloader/app/structs/DamageResult.h>
#if defined(IL2CPP_STRUCT_DamageResult_DEFINED)
#define IL2CPP_STRUCT_DamageResultContext_DEFINED
struct DamageResultContext {
    struct DamageResult DamageResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResultContext_FWDDECL)
#define IL2CPP_STRUCT_DamageResultContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageResultContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResultContext_DEFINED) && !defined(IL2CPP_STRUCT_DamageResultContext_FWDDECL)
#include <Modloader/app/structs/DamageResultContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResultContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
