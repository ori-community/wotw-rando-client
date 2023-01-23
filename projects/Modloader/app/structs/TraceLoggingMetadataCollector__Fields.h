#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_DEFINED)
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventFieldTags__Enum_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_DEFINED
struct TraceLoggingMetadataCollector_Impl;
struct FieldMetadata;
struct __declspec(align(8)) TraceLoggingMetadataCollector__Fields {
    struct TraceLoggingMetadataCollector_Impl* impl;
    struct FieldMetadata* currentGroup;
    int32_t bufferedArrayFieldCount;
    EventFieldTags__Enum _Tags_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_FWDDECL
#include <Modloader/app/structs/FieldMetadata.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector_Impl.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_FWDDECL)
#include <Modloader/app/structs/TraceLoggingMetadataCollector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingMetadataCollector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
