#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_CachedDigZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_CachedDigZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedDigZone_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_CachedDigZone_DEFINED
struct DigZone;
struct SandWormEntity_CachedDigZone {
    bool IsInZone;
    int32_t FrameCached;
    struct DigZone* Zone;
};
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedDigZone_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_CachedDigZone_FWDDECL
#include <Modloader/app/structs/DigZone.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_CachedDigZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedDigZone_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_CachedDigZone_FWDDECL)
#include <Modloader/app/structs/SandWormEntity_CachedDigZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity_CachedDigZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
