#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterizedStrings_FormatParam_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterizedStrings_FormatParam_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_FormatParam_DEFINED)
#define IL2CPP_STRUCT_ParameterizedStrings_FormatParam_DEFINED
struct String;
struct ParameterizedStrings_FormatParam {
    int32_t _int32_1;
    struct String* _string;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_FormatParam_FWDDECL)
#define IL2CPP_STRUCT_ParameterizedStrings_FormatParam_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ParameterizedStrings_FormatParam_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_FormatParam_DEFINED) && !defined(IL2CPP_STRUCT_ParameterizedStrings_FormatParam_FWDDECL)
#include <Modloader/app/structs/ParameterizedStrings_FormatParam.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterizedStrings_FormatParam.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
