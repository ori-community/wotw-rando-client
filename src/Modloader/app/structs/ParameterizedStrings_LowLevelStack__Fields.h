#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_DEFINED)
#define IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_DEFINED
struct ParameterizedStrings_FormatParam__Array;
struct __declspec(align(8)) ParameterizedStrings_LowLevelStack__Fields {
    struct ParameterizedStrings_FormatParam__Array* _arr;
    int32_t _count;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_FWDDECL
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Array.h>
#endif
#undef IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParameterizedStrings_LowLevelStack__Fields_FWDDECL)
#include <Modloader/app/structs/ParameterizedStrings_LowLevelStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterizedStrings_LowLevelStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
