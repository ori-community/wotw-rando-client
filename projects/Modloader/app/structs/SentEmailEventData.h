#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SentEmailEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SentEmailEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SentEmailEventData_DEFINED)
#include <Modloader/app/structs/SentEmailEventData__Fields.h>
#if defined(IL2CPP_STRUCT_SentEmailEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_SentEmailEventData_DEFINED
struct SentEmailEventData__Class;
struct SentEmailEventData {
    struct SentEmailEventData__Class* klass;
    MonitorData* monitor;
    struct SentEmailEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SentEmailEventData_FWDDECL)
#define IL2CPP_STRUCT_SentEmailEventData_FWDDECL
#include <Modloader/app/structs/SentEmailEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_SentEmailEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SentEmailEventData_DEFINED) && !defined(IL2CPP_STRUCT_SentEmailEventData_FWDDECL)
#include <Modloader/app/structs/SentEmailEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SentEmailEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
