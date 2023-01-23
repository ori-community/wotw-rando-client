#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloomOptimized_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloomOptimized_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomOptimized_DEFINED)
#include <Modloader/app/structs/BloomOptimized__Fields.h>
#if defined(IL2CPP_STRUCT_BloomOptimized__Fields_DEFINED)
#define IL2CPP_STRUCT_BloomOptimized_DEFINED
struct BloomOptimized__Class;
struct BloomOptimized {
    struct BloomOptimized__Class* klass;
    MonitorData* monitor;
    struct BloomOptimized__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloomOptimized_FWDDECL)
#define IL2CPP_STRUCT_BloomOptimized_FWDDECL
#include <Modloader/app/structs/BloomOptimized__Class.h>
#endif
#undef IL2CPP_STRUCT_BloomOptimized_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomOptimized_DEFINED) && !defined(IL2CPP_STRUCT_BloomOptimized_FWDDECL)
#include <Modloader/app/structs/BloomOptimized.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloomOptimized.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
