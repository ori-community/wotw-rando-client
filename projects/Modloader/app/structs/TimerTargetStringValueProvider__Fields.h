#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_DEFINED)
#include <Modloader/app/structs/StringValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_StringValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_DEFINED
struct String;
struct TimerTargetStringValueProvider__Fields {
    struct StringValueProvider__Fields _;
    int32_t m_cachedMs;
    struct String* m_cachedString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerTargetStringValueProvider__Fields_FWDDECL)
#include <Modloader/app/structs/TimerTargetStringValueProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerTargetStringValueProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
