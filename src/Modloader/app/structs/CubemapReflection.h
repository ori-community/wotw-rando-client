#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CubemapReflection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CubemapReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CubemapReflection_DEFINED)
#include <Modloader/app/structs/CubemapReflection__Fields.h>
#if defined(IL2CPP_STRUCT_CubemapReflection__Fields_DEFINED)
#define IL2CPP_STRUCT_CubemapReflection_DEFINED
struct CubemapReflection__Class;
struct CubemapReflection {
    struct CubemapReflection__Class* klass;
    MonitorData* monitor;
    struct CubemapReflection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CubemapReflection_FWDDECL)
#define IL2CPP_STRUCT_CubemapReflection_FWDDECL
#include <Modloader/app/structs/CubemapReflection__Class.h>
#endif
#undef IL2CPP_STRUCT_CubemapReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CubemapReflection_DEFINED) && !defined(IL2CPP_STRUCT_CubemapReflection_FWDDECL)
#include <Modloader/app/structs/CubemapReflection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CubemapReflection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
