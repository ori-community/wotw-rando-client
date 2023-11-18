#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_DEFINED)
#define IL2CPP_STRUCT_FormatProvider_DEFINED
struct FormatProvider__Class;
struct FormatProvider {
    struct FormatProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatProvider_FWDDECL)
#define IL2CPP_STRUCT_FormatProvider_FWDDECL
#include <Modloader/app/structs/FormatProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_DEFINED) && !defined(IL2CPP_STRUCT_FormatProvider_FWDDECL)
#include <Modloader/app/structs/FormatProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
