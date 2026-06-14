#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RiseSinkPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RiseSinkPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform_DEFINED)
#include <Modloader/app/structs/RiseSinkPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_RiseSinkPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_RiseSinkPlatform_DEFINED
struct RiseSinkPlatform__Class;
struct RiseSinkPlatform {
    struct RiseSinkPlatform__Class* klass;
    MonitorData* monitor;
    struct RiseSinkPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform_FWDDECL)
#define IL2CPP_STRUCT_RiseSinkPlatform_FWDDECL
#include <Modloader/app/structs/RiseSinkPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_RiseSinkPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform_DEFINED) && !defined(IL2CPP_STRUCT_RiseSinkPlatform_FWDDECL)
#include <Modloader/app/structs/RiseSinkPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RiseSinkPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
