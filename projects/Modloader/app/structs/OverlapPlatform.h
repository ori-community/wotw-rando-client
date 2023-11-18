#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverlapPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverlapPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverlapPlatform_DEFINED)
#include <Modloader/app/structs/OverlapPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_OverlapPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_OverlapPlatform_DEFINED
struct OverlapPlatform__Class;
struct OverlapPlatform {
    struct OverlapPlatform__Class* klass;
    MonitorData* monitor;
    struct OverlapPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverlapPlatform_FWDDECL)
#define IL2CPP_STRUCT_OverlapPlatform_FWDDECL
#include <Modloader/app/structs/OverlapPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_OverlapPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverlapPlatform_DEFINED) && !defined(IL2CPP_STRUCT_OverlapPlatform_FWDDECL)
#include <Modloader/app/structs/OverlapPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverlapPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
