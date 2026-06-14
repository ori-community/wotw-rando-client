#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkLogger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkLogger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkLogger__Fields_DEFINED)
#define IL2CPP_STRUCT_AkLogger__Fields_DEFINED
struct AkLogger_ErrorLoggerInteropDelegate;
struct __declspec(align(8)) AkLogger__Fields {
    struct AkLogger_ErrorLoggerInteropDelegate* errorLoggerDelegate;
};
#endif
#if !defined(IL2CPP_STRUCT_AkLogger__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkLogger__Fields_FWDDECL
#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate.h>
#endif
#undef IL2CPP_STRUCT_AkLogger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkLogger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkLogger__Fields_FWDDECL)
#include <Modloader/app/structs/AkLogger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkLogger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
