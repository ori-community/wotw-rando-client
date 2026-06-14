#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/MicroProfiler_StatType__Enum.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_DEFINED
struct MicroProfiler_StatType__Enum__Class;
struct MicroProfiler_StatType__Enum__Boxed {
    struct MicroProfiler_StatType__Enum__Class* klass;
    MonitorData* monitor;
    MicroProfiler_StatType__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/MicroProfiler_StatType__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_StatType__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_StatType__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
