#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoParameterInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoParameterInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoParameterInfo__Fields_DEFINED)
#include <Modloader/app/structs/RuntimeParameterInfo__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeParameterInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoParameterInfo__Fields_DEFINED
struct MonoParameterInfo__Fields {
    struct RuntimeParameterInfo__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoParameterInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoParameterInfo__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoParameterInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoParameterInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoParameterInfo__Fields_FWDDECL)
#include <Modloader/app/structs/MonoParameterInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoParameterInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
