#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuToggler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuToggler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuToggler__Fields_DEFINED
struct String;
struct List_1_DebugMenuToggler_ToggleOption_;
struct DebugMenuToggler_ToggleOption;
struct String__Array;
struct DebugMenuToggler__Fields {
    struct MonoBehaviour__Fields _;
    struct String* MenuPath;
    struct String* TogglerName;
    struct String* HelpString;
    struct List_1_DebugMenuToggler_ToggleOption_* Options;
    struct DebugMenuToggler_ToggleOption* NoneEnabledOption;
    int32_t m_currentOptionId;
    struct String__Array* m_cachedOptionList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuToggler__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuToggler__Fields_FWDDECL
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption.h>
#include <Modloader/app/structs/List_1_DebugMenuToggler_ToggleOption_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuToggler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuToggler__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenuToggler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuToggler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
