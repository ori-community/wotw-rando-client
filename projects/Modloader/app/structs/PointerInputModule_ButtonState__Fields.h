#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_DEFINED)
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#if defined(IL2CPP_STRUCT_PointerEventData_InputButton__Enum_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_DEFINED
struct PointerInputModule_MouseButtonEventData;
struct __declspec(align(8)) PointerInputModule_ButtonState__Fields {
    PointerEventData_InputButton__Enum m_Button;

    struct PointerInputModule_MouseButtonEventData* m_EventData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_FWDDECL
#include <Modloader/app/structs/PointerInputModule_MouseButtonEventData.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_FWDDECL)
#include <Modloader/app/structs/PointerInputModule_ButtonState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule_ButtonState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
