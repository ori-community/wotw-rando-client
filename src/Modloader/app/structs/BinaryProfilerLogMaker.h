#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryProfilerLogMaker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryProfilerLogMaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryProfilerLogMaker_DEFINED)
#include <Modloader/app/structs/BinaryProfilerLogMaker__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryProfilerLogMaker__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryProfilerLogMaker_DEFINED
struct BinaryProfilerLogMaker__Class;
struct BinaryProfilerLogMaker {
    struct BinaryProfilerLogMaker__Class* klass;
    MonitorData* monitor;
    struct BinaryProfilerLogMaker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryProfilerLogMaker_FWDDECL)
#define IL2CPP_STRUCT_BinaryProfilerLogMaker_FWDDECL
#include <Modloader/app/structs/BinaryProfilerLogMaker__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryProfilerLogMaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryProfilerLogMaker_DEFINED) && !defined(IL2CPP_STRUCT_BinaryProfilerLogMaker_FWDDECL)
#include <Modloader/app/structs/BinaryProfilerLogMaker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryProfilerLogMaker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
