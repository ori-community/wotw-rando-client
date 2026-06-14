#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_DEFINED
struct List_1_System_Diagnostics_Tracing_FieldMetadata_;
struct __declspec(align(8)) TraceLoggingMetadataCollector_Impl__Fields {
    struct List_1_System_Diagnostics_Tracing_FieldMetadata_* fields;
    int16_t scratchSize;
    int8_t dataCount;
    int8_t pinCount;
    int32_t bufferNesting;
    bool scalar;
};
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_FieldMetadata_.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_Impl__Fields_FWDDECL)
#include <Modloader/app/structs/TraceLoggingMetadataCollector_Impl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingMetadataCollector_Impl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
