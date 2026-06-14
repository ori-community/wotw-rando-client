#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_DEFINED
struct PointerEventData;
struct InputField;
struct Object;
struct __declspec(align(8)) InputField_MouseDragOutsideRect_c_Iterator1__Fields {
    struct Vector2 _position___1;
    struct PointerEventData* eventData;
    struct Vector2 _localMousePos___1;
    struct Rect _rect___1;
    float _delay___1;
    struct InputField* _this;
    struct Object* _current;
    bool _disposing;
    int32_t _PC;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_FWDDECL
#include <Modloader/app/structs/InputField.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PointerEventData.h>
#endif
#undef IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputField_MouseDragOutsideRect_c_Iterator1__Fields_FWDDECL)
#include <Modloader/app/structs/InputField_MouseDragOutsideRect_c_Iterator1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField_MouseDragOutsideRect_c_Iterator1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
