#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkTriangleArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkTriangleArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTriangleArray_DEFINED)
#include <Modloader/app/structs/AkTriangleArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkTriangleArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkTriangleArray_DEFINED
struct AkTriangleArray__Class;
struct AkTriangleArray {
    struct AkTriangleArray__Class* klass;
    MonitorData* monitor;
    struct AkTriangleArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkTriangleArray_FWDDECL)
#define IL2CPP_STRUCT_AkTriangleArray_FWDDECL
#include <Modloader/app/structs/AkTriangleArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkTriangleArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTriangleArray_DEFINED) && !defined(IL2CPP_STRUCT_AkTriangleArray_FWDDECL)
#include <Modloader/app/structs/AkTriangleArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkTriangleArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
