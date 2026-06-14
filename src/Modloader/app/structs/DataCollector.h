#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCollector_DEFINED)
#define IL2CPP_STRUCT_DataCollector_DEFINED
struct EventSource_EventData;
struct GCHandle;
struct Byte__Array;
struct DataCollector {
    uint8_t* scratchEnd;
    struct EventSource_EventData* datasEnd;
    struct GCHandle* pinsEnd;
    struct EventSource_EventData* datasStart;
    uint8_t* scratch;
    struct EventSource_EventData* datas;
    struct GCHandle* pins;
    struct Byte__Array* buffer;
    int32_t bufferPos;
    int32_t bufferNesting;
    bool writingScalars;
};
#endif
#if !defined(IL2CPP_STRUCT_DataCollector_FWDDECL)
#define IL2CPP_STRUCT_DataCollector_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EventSource_EventData.h>
#include <Modloader/app/structs/GCHandle.h>
#endif
#undef IL2CPP_STRUCT_DataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCollector_DEFINED) && !defined(IL2CPP_STRUCT_DataCollector_FWDDECL)
#include <Modloader/app/structs/DataCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
