#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlItem__Fields_DEFINED
struct KeyCode__Enum__Array;
struct Dictionary_2_System_Int32_UnityEngine_KeyCode_;
struct CommandBinding;
struct __declspec(align(8)) ControlItem__Fields {
    struct KeyCode__Enum__Array* DefaultKeyCodes;
    struct KeyCode__Enum__Array* CurrentKeyCodes;
    struct Dictionary_2_System_Int32_UnityEngine_KeyCode_* ChangingKeyCodes;
    bool Changed;
    struct CommandBinding* CommandBinding;
};
#endif
#if !defined(IL2CPP_STRUCT_ControlItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlItem__Fields_FWDDECL
#include <Modloader/app/structs/CommandBinding.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/KeyCode__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_ControlItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlItem__Fields_FWDDECL)
#include <Modloader/app/structs/ControlItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
