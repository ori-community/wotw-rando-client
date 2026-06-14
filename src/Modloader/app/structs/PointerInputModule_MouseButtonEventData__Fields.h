#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_DEFINED)
#include <Modloader/app/structs/PointerEventData_FramePressState__Enum.h>
#if defined(IL2CPP_STRUCT_PointerEventData_FramePressState__Enum_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_DEFINED
struct PointerEventData;
struct __declspec(align(8)) PointerInputModule_MouseButtonEventData__Fields {
    PointerEventData_FramePressState__Enum buttonState;

    struct PointerEventData* buttonData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_FWDDECL
#include <Modloader/app/structs/PointerEventData.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule_MouseButtonEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PointerInputModule_MouseButtonEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule_MouseButtonEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
