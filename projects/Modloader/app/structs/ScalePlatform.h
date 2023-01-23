#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScalePlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScalePlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalePlatform_DEFINED)
#include <Modloader/app/structs/ScalePlatform__Fields.h>
#if defined(IL2CPP_STRUCT_ScalePlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_ScalePlatform_DEFINED
struct ScalePlatform__Class;
struct ScalePlatform {
    struct ScalePlatform__Class* klass;
    MonitorData* monitor;
    struct ScalePlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScalePlatform_FWDDECL)
#define IL2CPP_STRUCT_ScalePlatform_FWDDECL
#include <Modloader/app/structs/ScalePlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_ScalePlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalePlatform_DEFINED) && !defined(IL2CPP_STRUCT_ScalePlatform_FWDDECL)
#include <Modloader/app/structs/ScalePlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScalePlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
