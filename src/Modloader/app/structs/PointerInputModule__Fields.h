#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED)
#include <Modloader/app/structs/BaseInputModule__Fields.h>
#if defined(IL2CPP_STRUCT_BaseInputModule__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED
struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_;
struct PointerInputModule_MouseState;
struct PointerInputModule__Fields {
    struct BaseInputModule__Fields _;
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_* m_PointerData;
    struct PointerInputModule_MouseState* m_MouseState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_.h>
#include <Modloader/app/structs/PointerInputModule_MouseState.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule__Fields_FWDDECL)
#include <Modloader/app/structs/PointerInputModule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
