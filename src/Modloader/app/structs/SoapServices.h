#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_DEFINED)
#define IL2CPP_STRUCT_SoapServices_DEFINED
struct SoapServices__Class;
struct SoapServices {
    struct SoapServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SoapServices_FWDDECL)
#define IL2CPP_STRUCT_SoapServices_FWDDECL
#include <Modloader/app/structs/SoapServices__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_DEFINED) && !defined(IL2CPP_STRUCT_SoapServices_FWDDECL)
#include <Modloader/app/structs/SoapServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
