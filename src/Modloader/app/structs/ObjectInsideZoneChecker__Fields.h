#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED
struct Transform;
struct ObjectInsideZoneChecker__Fields {
    struct Condition_1__Fields _;
    struct Rect m_bounds;
    struct Transform* externalTransform;
    struct Vector2 Size;
    struct Vector2 Anchor;
    float checkResultDelay;
    struct Color EditorColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectInsideZoneChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectInsideZoneChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
