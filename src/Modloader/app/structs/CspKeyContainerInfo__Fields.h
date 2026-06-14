#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CspKeyContainerInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CspKeyContainerInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CspKeyContainerInfo__Fields_DEFINED
struct CspParameters;
struct __declspec(align(8)) CspKeyContainerInfo__Fields {
    struct CspParameters* _params;
    bool _random;
};
#endif
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CspKeyContainerInfo__Fields_FWDDECL
#include <Modloader/app/structs/CspParameters.h>
#endif
#undef IL2CPP_STRUCT_CspKeyContainerInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CspKeyContainerInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CspKeyContainerInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CspKeyContainerInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
