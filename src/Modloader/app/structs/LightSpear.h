#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightSpear_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightSpear_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSpear_DEFINED)
#include <Modloader/app/structs/LightSpear__Fields.h>
#if defined(IL2CPP_STRUCT_LightSpear__Fields_DEFINED)
#define IL2CPP_STRUCT_LightSpear_DEFINED
struct LightSpear__Class;
struct LightSpear {
    struct LightSpear__Class* klass;
    MonitorData* monitor;
    struct LightSpear__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightSpear_FWDDECL)
#define IL2CPP_STRUCT_LightSpear_FWDDECL
#include <Modloader/app/structs/LightSpear__Class.h>
#endif
#undef IL2CPP_STRUCT_LightSpear_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSpear_DEFINED) && !defined(IL2CPP_STRUCT_LightSpear_FWDDECL)
#include <Modloader/app/structs/LightSpear.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightSpear.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
