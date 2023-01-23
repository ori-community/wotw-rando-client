#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFormatProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFormatProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatProvider_DEFINED)
#define IL2CPP_STRUCT_IFormatProvider_DEFINED
struct IFormatProvider__Class;
struct IFormatProvider {
    struct IFormatProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFormatProvider_FWDDECL)
#define IL2CPP_STRUCT_IFormatProvider_FWDDECL
#include <Modloader/app/structs/IFormatProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IFormatProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatProvider_DEFINED) && !defined(IL2CPP_STRUCT_IFormatProvider_FWDDECL)
#include <Modloader/app/structs/IFormatProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFormatProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
