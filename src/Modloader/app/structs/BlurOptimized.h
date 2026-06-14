#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlurOptimized_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlurOptimized_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlurOptimized_DEFINED)
#include <Modloader/app/structs/BlurOptimized__Fields.h>
#if defined(IL2CPP_STRUCT_BlurOptimized__Fields_DEFINED)
#define IL2CPP_STRUCT_BlurOptimized_DEFINED
struct BlurOptimized__Class;
struct BlurOptimized {
    struct BlurOptimized__Class* klass;
    MonitorData* monitor;
    struct BlurOptimized__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlurOptimized_FWDDECL)
#define IL2CPP_STRUCT_BlurOptimized_FWDDECL
#include <Modloader/app/structs/BlurOptimized__Class.h>
#endif
#undef IL2CPP_STRUCT_BlurOptimized_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlurOptimized_DEFINED) && !defined(IL2CPP_STRUCT_BlurOptimized_FWDDECL)
#include <Modloader/app/structs/BlurOptimized.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlurOptimized.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
