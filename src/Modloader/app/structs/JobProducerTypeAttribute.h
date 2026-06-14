#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobProducerTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobProducerTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobProducerTypeAttribute_DEFINED)
#include <Modloader/app/structs/JobProducerTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JobProducerTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JobProducerTypeAttribute_DEFINED
struct JobProducerTypeAttribute__Class;
struct JobProducerTypeAttribute {
    struct JobProducerTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct JobProducerTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobProducerTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_JobProducerTypeAttribute_FWDDECL
#include <Modloader/app/structs/JobProducerTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JobProducerTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobProducerTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JobProducerTypeAttribute_FWDDECL)
#include <Modloader/app/structs/JobProducerTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobProducerTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
