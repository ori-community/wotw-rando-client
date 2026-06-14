#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureBasedOnHealth_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureBasedOnHealth_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth_DEFINED)
#include <Modloader/app/structs/TextureBasedOnHealth__Fields.h>
#if defined(IL2CPP_STRUCT_TextureBasedOnHealth__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureBasedOnHealth_DEFINED
struct TextureBasedOnHealth__Class;
struct TextureBasedOnHealth {
    struct TextureBasedOnHealth__Class* klass;
    MonitorData* monitor;
    struct TextureBasedOnHealth__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth_FWDDECL)
#define IL2CPP_STRUCT_TextureBasedOnHealth_FWDDECL
#include <Modloader/app/structs/TextureBasedOnHealth__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureBasedOnHealth_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth_DEFINED) && !defined(IL2CPP_STRUCT_TextureBasedOnHealth_FWDDECL)
#include <Modloader/app/structs/TextureBasedOnHealth.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureBasedOnHealth.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
