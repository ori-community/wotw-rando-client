#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidOwner_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_GuidOwner_DEFINED
struct GuidOwner__Class;
struct GuidOwner {
    struct GuidOwner__Class* klass;
    MonitorData* monitor;
    struct GuidOwner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuidOwner_FWDDECL)
#define IL2CPP_STRUCT_GuidOwner_FWDDECL
#include <Modloader/app/structs/GuidOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidOwner_DEFINED) && !defined(IL2CPP_STRUCT_GuidOwner_FWDDECL)
#include <Modloader/app/structs/GuidOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
