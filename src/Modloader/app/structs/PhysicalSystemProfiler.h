#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_DEFINED)
#include <Modloader/app/structs/PhysicalSystemProfiler__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_DEFINED
struct PhysicalSystemProfiler__Class;
struct PhysicalSystemProfiler {
    struct PhysicalSystemProfiler__Class* klass;
    MonitorData* monitor;
    struct PhysicalSystemProfiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_FWDDECL
#include <Modloader/app/structs/PhysicalSystemProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
