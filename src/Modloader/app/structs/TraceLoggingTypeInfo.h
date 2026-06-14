#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo_DEFINED)
#include <Modloader/app/structs/TraceLoggingTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo_DEFINED
struct TraceLoggingTypeInfo__Class;
struct TraceLoggingTypeInfo {
    struct TraceLoggingTypeInfo__Class* klass;
    MonitorData* monitor;
    struct TraceLoggingTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo_FWDDECL
#include <Modloader/app/structs/TraceLoggingTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo_FWDDECL)
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
