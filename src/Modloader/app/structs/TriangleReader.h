#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleReader_DEFINED)
#include <Modloader/app/structs/TriangleReader__Fields.h>
#if defined(IL2CPP_STRUCT_TriangleReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleReader_DEFINED
struct TriangleReader__Class;
struct TriangleReader {
    struct TriangleReader__Class* klass;
    MonitorData* monitor;
    struct TriangleReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriangleReader_FWDDECL)
#define IL2CPP_STRUCT_TriangleReader_FWDDECL
#include <Modloader/app/structs/TriangleReader__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleReader_DEFINED) && !defined(IL2CPP_STRUCT_TriangleReader_FWDDECL)
#include <Modloader/app/structs/TriangleReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
