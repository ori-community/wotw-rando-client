#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrianglePool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrianglePool_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_DEFINED)
#include <Modloader/app/structs/TrianglePool__Fields.h>
#if defined(IL2CPP_STRUCT_TrianglePool__Fields_DEFINED)
#define IL2CPP_STRUCT_TrianglePool_DEFINED
struct TrianglePool__Class;
struct TrianglePool {
    struct TrianglePool__Class* klass;
    MonitorData* monitor;
    struct TrianglePool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrianglePool_FWDDECL)
#define IL2CPP_STRUCT_TrianglePool_FWDDECL
#include <Modloader/app/structs/TrianglePool__Class.h>
#endif
#undef IL2CPP_STRUCT_TrianglePool_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_DEFINED) && !defined(IL2CPP_STRUCT_TrianglePool_FWDDECL)
#include <Modloader/app/structs/TrianglePool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrianglePool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
