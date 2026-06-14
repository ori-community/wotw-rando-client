#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sprite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sprite_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sprite_DEFINED)
#include <Modloader/app/structs/Sprite__Fields.h>
#if defined(IL2CPP_STRUCT_Sprite__Fields_DEFINED)
#define IL2CPP_STRUCT_Sprite_DEFINED
struct Sprite__Class;
struct Sprite {
    struct Sprite__Class* klass;
    MonitorData* monitor;
    struct Sprite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sprite_FWDDECL)
#define IL2CPP_STRUCT_Sprite_FWDDECL
#include <Modloader/app/structs/Sprite__Class.h>
#endif
#undef IL2CPP_STRUCT_Sprite_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sprite_DEFINED) && !defined(IL2CPP_STRUCT_Sprite_FWDDECL)
#include <Modloader/app/structs/Sprite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sprite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
