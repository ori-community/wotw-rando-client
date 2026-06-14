#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CspParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CspParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspParameters_DEFINED)
#include <Modloader/app/structs/CspParameters__Fields.h>
#if defined(IL2CPP_STRUCT_CspParameters__Fields_DEFINED)
#define IL2CPP_STRUCT_CspParameters_DEFINED
struct CspParameters__Class;
struct CspParameters {
    struct CspParameters__Class* klass;
    MonitorData* monitor;
    struct CspParameters__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CspParameters_FWDDECL)
#define IL2CPP_STRUCT_CspParameters_FWDDECL
#include <Modloader/app/structs/CspParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_CspParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspParameters_DEFINED) && !defined(IL2CPP_STRUCT_CspParameters_FWDDECL)
#include <Modloader/app/structs/CspParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CspParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
