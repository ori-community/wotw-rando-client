#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sample__Fields_DEFINED)
#define IL2CPP_STRUCT_Sample__Fields_DEFINED
struct TexturePoolEntity;
struct __declspec(align(8)) Sample__Fields {
    struct TexturePoolEntity* _MasterTex_k__BackingField;
    struct TexturePoolEntity* _SampleTex_k__BackingField;
    float _Energy_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Sample__Fields_FWDDECL)
#define IL2CPP_STRUCT_Sample__Fields_FWDDECL
#include <Modloader/app/structs/TexturePoolEntity.h>
#endif
#undef IL2CPP_STRUCT_Sample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Sample__Fields_FWDDECL)
#include <Modloader/app/structs/Sample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
