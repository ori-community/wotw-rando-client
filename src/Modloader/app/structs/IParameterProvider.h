#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IParameterProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IParameterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IParameterProvider_DEFINED)
#define IL2CPP_STRUCT_IParameterProvider_DEFINED
struct IParameterProvider__Class;
struct IParameterProvider {
    struct IParameterProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IParameterProvider_FWDDECL)
#define IL2CPP_STRUCT_IParameterProvider_FWDDECL
#include <Modloader/app/structs/IParameterProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IParameterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IParameterProvider_DEFINED) && !defined(IL2CPP_STRUCT_IParameterProvider_FWDDECL)
#include <Modloader/app/structs/IParameterProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IParameterProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
