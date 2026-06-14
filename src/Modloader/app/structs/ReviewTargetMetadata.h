#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReviewTargetMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReviewTargetMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata_DEFINED)
#include <Modloader/app/structs/ReviewTargetMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_ReviewTargetMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_ReviewTargetMetadata_DEFINED
struct ReviewTargetMetadata__Class;
struct ReviewTargetMetadata {
    struct ReviewTargetMetadata__Class* klass;
    MonitorData* monitor;
    struct ReviewTargetMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata_FWDDECL)
#define IL2CPP_STRUCT_ReviewTargetMetadata_FWDDECL
#include <Modloader/app/structs/ReviewTargetMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_ReviewTargetMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata_DEFINED) && !defined(IL2CPP_STRUCT_ReviewTargetMetadata_FWDDECL)
#include <Modloader/app/structs/ReviewTargetMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReviewTargetMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
