#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_DEFINED
struct NvnMemoryDebugger_NvnDataCache;
struct Application_NvnBufferUsage__Enum__Array;
struct NvnMemoryDebugger__StaticFields {
    struct NvnMemoryDebugger_NvnDataCache* m_cache;
    struct Application_NvnBufferUsage__Enum__Array* m_usages;
    int32_t UpdateFrameInterval;
    bool LiveUpdate;
    bool m_enabled;
    int32_t m_framesSinceUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_FWDDECL
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Array.h>
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger__StaticFields_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
