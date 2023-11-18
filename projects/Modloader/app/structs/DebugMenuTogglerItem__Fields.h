#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_DEFINED
struct String;
struct Func_1_String_;
struct IDebugMenuToggleable;
struct __declspec(align(8)) DebugMenuTogglerItem__Fields {
    float m_holdRemainingTime;
    bool m_held;
    struct String* _Path_k__BackingField;
    struct Func_1_String_* _DynamicText_k__BackingField;
    struct IDebugMenuToggleable* m_toggleable;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IDebugMenuToggleable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenuTogglerItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuTogglerItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
