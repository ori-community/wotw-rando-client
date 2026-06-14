#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TexturePoolEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TexturePoolEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturePoolEntity_DEFINED)
#include <Modloader/app/structs/TexturePoolEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TexturePoolEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TexturePoolEntity_DEFINED
struct TexturePoolEntity__Class;
struct TexturePoolEntity {
    struct TexturePoolEntity__Class* klass;
    MonitorData* monitor;
    struct TexturePoolEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TexturePoolEntity_FWDDECL)
#define IL2CPP_STRUCT_TexturePoolEntity_FWDDECL
#include <Modloader/app/structs/TexturePoolEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TexturePoolEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturePoolEntity_DEFINED) && !defined(IL2CPP_STRUCT_TexturePoolEntity_FWDDECL)
#include <Modloader/app/structs/TexturePoolEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TexturePoolEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
