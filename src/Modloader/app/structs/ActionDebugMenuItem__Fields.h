#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionDebugMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionDebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionDebugMenuItem__Fields_DEFINED
struct String;
struct Func_1_Boolean_;
struct Func_1_String_;
struct __declspec(align(8)) ActionDebugMenuItem__Fields {
    struct String* TitleText;
    struct Func_1_Boolean_* Func;
    float m_pressedTimeCountDown;
    struct Func_1_String_* _DynamicText_k__BackingField;
    struct String* m_helpText;
    struct String* _Path_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionDebugMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ActionDebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/ActionDebugMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionDebugMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
