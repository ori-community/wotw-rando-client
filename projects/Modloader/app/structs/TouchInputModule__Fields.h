#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchInputModule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchInputModule__Fields_DEFINED)
#include <Modloader/app/structs/PointerInputModule__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_TouchInputModule__Fields_DEFINED
struct PointerEventData;
struct TouchInputModule__Fields {
    struct PointerInputModule__Fields _;
    struct Vector2 m_LastMousePosition;
    struct Vector2 m_MousePosition;
    struct PointerEventData* m_InputPointerEvent;
    bool m_ForceModuleActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TouchInputModule__Fields_FWDDECL)
#define IL2CPP_STRUCT_TouchInputModule__Fields_FWDDECL
#include <Modloader/app/structs/PointerEventData.h>
#endif
#undef IL2CPP_STRUCT_TouchInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchInputModule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TouchInputModule__Fields_FWDDECL)
#include <Modloader/app/structs/TouchInputModule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchInputModule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
