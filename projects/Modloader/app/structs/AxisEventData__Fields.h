#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisEventData__Fields_DEFINED)
#include <Modloader/app/structs/BaseEventData__Fields.h>
#include <Modloader/app/structs/MoveDirection__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEventData__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MoveDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_AxisEventData__Fields_DEFINED
struct AxisEventData__Fields {
    struct BaseEventData__Fields _;
    struct Vector2 _moveVector_k__BackingField;
    MoveDirection__Enum _moveDir_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_AxisEventData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AxisEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AxisEventData__Fields_FWDDECL)
#include <Modloader/app/structs/AxisEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
