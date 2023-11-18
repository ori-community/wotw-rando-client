#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_DEFINED
struct MemoryLabelDebugger_MemoryManagerDataCache;
struct MemoryLabelDebugger__StaticFields {
    struct MemoryLabelDebugger_MemoryManagerDataCache* m_cache;
    int32_t UpdateFrameInterval;
    bool LiveUpdate;
    bool m_enabled;
    int32_t m_framesSinceUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_FWDDECL
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryManagerDataCache.h>
#endif
#undef IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryLabelDebugger__StaticFields_FWDDECL)
#include <Modloader/app/structs/MemoryLabelDebugger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryLabelDebugger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
