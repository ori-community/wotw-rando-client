#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_DEFINED)
#define IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_DEFINED
struct UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO {
    int32_t IsEnabled;
    uint8_t Level;
    uint8_t Reserved1;
    uint16_t LoggerId;
    int32_t EnableProperty;
    int32_t Reserved2;
    int64_t MatchAnyKeyword;
    int64_t MatchAllKeyword;
};
#endif
#if !defined(IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_FWDDECL)
#define IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_DEFINED) && !defined(IL2CPP_STRUCT_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_FWDDECL)
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
