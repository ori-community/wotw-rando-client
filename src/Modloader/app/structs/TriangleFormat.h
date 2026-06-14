#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleFormat_DEFINED)
#define IL2CPP_STRUCT_TriangleFormat_DEFINED
struct TriangleFormat__Class;
struct TriangleFormat {
    struct TriangleFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TriangleFormat_FWDDECL)
#define IL2CPP_STRUCT_TriangleFormat_FWDDECL
#include <Modloader/app/structs/TriangleFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleFormat_DEFINED) && !defined(IL2CPP_STRUCT_TriangleFormat_FWDDECL)
#include <Modloader/app/structs/TriangleFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
