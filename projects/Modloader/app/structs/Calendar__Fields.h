#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Calendar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Calendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Calendar__Fields_DEFINED)
#define IL2CPP_STRUCT_Calendar__Fields_DEFINED
struct __declspec(align(8)) Calendar__Fields {
    int32_t m_currentEraValue;
    bool m_isReadOnly;
    int32_t twoDigitYearMax;
};
#endif
#if !defined(IL2CPP_STRUCT_Calendar__Fields_FWDDECL)
#define IL2CPP_STRUCT_Calendar__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Calendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Calendar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Calendar__Fields_FWDDECL)
#include <Modloader/app/structs/Calendar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Calendar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
