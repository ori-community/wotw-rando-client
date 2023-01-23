#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightLambda_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightLambda_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightLambda_DEFINED)
#include <Modloader/app/structs/LightLambda__Fields.h>
#if defined(IL2CPP_STRUCT_LightLambda__Fields_DEFINED)
#define IL2CPP_STRUCT_LightLambda_DEFINED
struct LightLambda__Class;
struct LightLambda {
    struct LightLambda__Class* klass;
    MonitorData* monitor;
    struct LightLambda__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightLambda_FWDDECL)
#define IL2CPP_STRUCT_LightLambda_FWDDECL
#include <Modloader/app/structs/LightLambda__Class.h>
#endif
#undef IL2CPP_STRUCT_LightLambda_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightLambda_DEFINED) && !defined(IL2CPP_STRUCT_LightLambda_FWDDECL)
#include <Modloader/app/structs/LightLambda.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightLambda.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
