#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_DEFINED
struct DebugHubItem_DebugHubItemLayout {
    struct Vector2 Size;
    struct Rect Bounds;
    float StartAngle;
    float EndAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_FWDDECL)
#define IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_FWDDECL
#endif
#undef IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_DEFINED) && !defined(IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_FWDDECL)
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
