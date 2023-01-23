#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonIconRenderer_IconObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonIconRenderer_IconObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_IconObject_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MoonIconRenderer_IconObject_DEFINED
struct GameObject;
struct MoonIconRenderer_IconObject {
    struct Vector2 Position;
    int32_t Index;
    struct GameObject* Instance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_IconObject_FWDDECL)
#define IL2CPP_STRUCT_MoonIconRenderer_IconObject_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_MoonIconRenderer_IconObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_IconObject_DEFINED) && !defined(IL2CPP_STRUCT_MoonIconRenderer_IconObject_FWDDECL)
#include <Modloader/app/structs/MoonIconRenderer_IconObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonIconRenderer_IconObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
