#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UICharInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UICharInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UICharInfo_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UICharInfo_DEFINED
struct UICharInfo {
    struct Vector2 cursorPos;
    float charWidth;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UICharInfo_FWDDECL)
#define IL2CPP_STRUCT_UICharInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UICharInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UICharInfo_DEFINED) && !defined(IL2CPP_STRUCT_UICharInfo_FWDDECL)
#include <Modloader/app/structs/UICharInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UICharInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
