#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovingPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovingPlatform_DEFINED)
#include <Modloader/app/structs/SinMovingPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_SinMovingPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_SinMovingPlatform_DEFINED
struct SinMovingPlatform__Class;
struct SinMovingPlatform {
    struct SinMovingPlatform__Class* klass;
    MonitorData* monitor;
    struct SinMovingPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinMovingPlatform_FWDDECL)
#define IL2CPP_STRUCT_SinMovingPlatform_FWDDECL
#include <Modloader/app/structs/SinMovingPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_SinMovingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovingPlatform_DEFINED) && !defined(IL2CPP_STRUCT_SinMovingPlatform_FWDDECL)
#include <Modloader/app/structs/SinMovingPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovingPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
