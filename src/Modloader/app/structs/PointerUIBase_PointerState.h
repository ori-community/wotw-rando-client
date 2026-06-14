#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIBase_PointerState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIBase_PointerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase_PointerState_DEFINED)
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Ray_DEFINED) && defined(IL2CPP_STRUCT_MouseButton__Enum_DEFINED)
#define IL2CPP_STRUCT_PointerUIBase_PointerState_DEFINED
struct PointerUIBase_PointerState {
    int32_t id;
    bool is2D;
    struct Vector2 position2D;
    struct Ray position3D;
    MouseButton__Enum activeButtons;

    struct Vector2 scrollDelta;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIBase_PointerState_FWDDECL)
#define IL2CPP_STRUCT_PointerUIBase_PointerState_FWDDECL
#endif
#undef IL2CPP_STRUCT_PointerUIBase_PointerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase_PointerState_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIBase_PointerState_FWDDECL)
#include <Modloader/app/structs/PointerUIBase_PointerState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIBase_PointerState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
