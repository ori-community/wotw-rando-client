#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetPublisherDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetPublisherDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPublisherDataResult_DEFINED)
#include <Modloader/app/structs/SetPublisherDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetPublisherDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetPublisherDataResult_DEFINED
struct SetPublisherDataResult__Class;
struct SetPublisherDataResult {
    struct SetPublisherDataResult__Class* klass;
    MonitorData* monitor;
    struct SetPublisherDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetPublisherDataResult_FWDDECL)
#define IL2CPP_STRUCT_SetPublisherDataResult_FWDDECL
#include <Modloader/app/structs/SetPublisherDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetPublisherDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPublisherDataResult_DEFINED) && !defined(IL2CPP_STRUCT_SetPublisherDataResult_FWDDECL)
#include <Modloader/app/structs/SetPublisherDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetPublisherDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
