#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TexturesPool__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TexturesPool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturesPool__Fields_DEFINED)
#define IL2CPP_STRUCT_TexturesPool__Fields_DEFINED
struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_;
struct __declspec(align(8)) TexturesPool__Fields {
    struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_* m_entities;
    int32_t TexturesAllocated;
    int32_t TexturesReturned;
};
#endif
#if !defined(IL2CPP_STRUCT_TexturesPool__Fields_FWDDECL)
#define IL2CPP_STRUCT_TexturesPool__Fields_FWDDECL
#include <Modloader/app/structs/Stack_1_Moon_ArtOptimization_TexturePoolEntity_.h>
#endif
#undef IL2CPP_STRUCT_TexturesPool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturesPool__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TexturesPool__Fields_FWDDECL)
#include <Modloader/app/structs/TexturesPool__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TexturesPool__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
