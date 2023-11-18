#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_DEFINED
struct String;
struct Func_1_String_;
struct __declspec(align(8)) Vector2DebugMenuItem__Fields {
    struct String* m_text;
    struct Vector2 m_value;
    struct Func_1_String_* _DynamicText_k__BackingField;
    struct String* m_helpText;
    struct String* _Path_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vector2DebugMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/Vector2DebugMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2DebugMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
