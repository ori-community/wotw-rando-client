#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleWriter_DEFINED)
#define IL2CPP_STRUCT_TriangleWriter_DEFINED
struct TriangleWriter__Class;
struct TriangleWriter {
    struct TriangleWriter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TriangleWriter_FWDDECL)
#define IL2CPP_STRUCT_TriangleWriter_FWDDECL
#include <Modloader/app/structs/TriangleWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleWriter_DEFINED) && !defined(IL2CPP_STRUCT_TriangleWriter_FWDDECL)
#include <Modloader/app/structs/TriangleWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
