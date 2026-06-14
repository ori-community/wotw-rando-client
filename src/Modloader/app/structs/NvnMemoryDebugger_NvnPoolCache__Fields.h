#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_DEFINED)
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#if defined(IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_DEFINED
struct String;
struct __declspec(align(8)) NvnMemoryDebugger_NvnPoolCache__Fields {
    Application_NvnBufferUsage__Enum Usage;

    struct String* UsageName;
    uint64_t UsedBytes;
    uint64_t AllocBytes;
    int32_t PoolCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
