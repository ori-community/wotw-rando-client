#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteState__Boxed_DEFINED)
#include <Modloader/app/structs/SpriteState.h>
#if defined(IL2CPP_STRUCT_SpriteState_DEFINED)
#define IL2CPP_STRUCT_SpriteState__Boxed_DEFINED
struct SpriteState__Class;
struct SpriteState__Boxed {
    struct SpriteState__Class* klass;
    MonitorData* monitor;
    struct SpriteState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SpriteState__Boxed_FWDDECL
#include <Modloader/app/structs/SpriteState__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SpriteState__Boxed_FWDDECL)
#include <Modloader/app/structs/SpriteState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
