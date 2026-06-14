#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_DEFINED)
#define IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_DEFINED
struct String;
struct Func_1_String_;
struct Func_1_Double_;
struct Action_1_Double_;
struct __declspec(align(8)) NumericDebugMenuItem_1_System_Double___Fields {
    struct String* _Path_k__BackingField;
    struct String* _Text_k__BackingField;
    struct String* _HelpText_k__BackingField;
    double _Value_k__BackingField;
    float m_holdRemainingTime;
    bool m_held;
    bool m_shouldShowOnlySelected;
    struct Func_1_String_* _DynamicText_k__BackingField;
    struct Func_1_Double_* m_getter;
    struct Action_1_Double_* m_setter;
    struct Func_1_String_* m_textGetter;
    double m_min;
    double m_max;
    double m_speed;
    double m_storedValue;
};
#endif
#if !defined(IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_FWDDECL)
#define IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Double_.h>
#include <Modloader/app/structs/Func_1_Double_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_DEFINED) && !defined(IL2CPP_STRUCT_NumericDebugMenuItem_1_System_Double___Fields_FWDDECL)
#include <Modloader/app/structs/NumericDebugMenuItem_1_System_Double___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumericDebugMenuItem_1_System_Double___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
