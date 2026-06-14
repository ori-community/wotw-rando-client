#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatProvider_Number_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatProvider_Number_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_DEFINED)
#define IL2CPP_STRUCT_FormatProvider_Number_DEFINED
struct FormatProvider_Number__Class;
struct FormatProvider_Number {
    struct FormatProvider_Number__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_FWDDECL)
#define IL2CPP_STRUCT_FormatProvider_Number_FWDDECL
#include <Modloader/app/structs/FormatProvider_Number__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatProvider_Number_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_DEFINED) && !defined(IL2CPP_STRUCT_FormatProvider_Number_FWDDECL)
#include <Modloader/app/structs/FormatProvider_Number.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatProvider_Number.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
