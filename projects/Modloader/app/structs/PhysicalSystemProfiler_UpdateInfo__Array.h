#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_DEFINED
struct PhysicalSystemProfiler_UpdateInfo__Array__Class;
struct PhysicalSystemProfiler_UpdateInfo;
struct PhysicalSystemProfiler_UpdateInfo__Array {
    struct PhysicalSystemProfiler_UpdateInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct PhysicalSystemProfiler_UpdateInfo* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_FWDDECL
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Array_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
