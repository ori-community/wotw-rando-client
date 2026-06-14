#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CubemapArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CubemapArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_CubemapArray_DEFINED)
#include <Modloader/app/structs/CubemapArray__Fields.h>
#if defined(IL2CPP_STRUCT_CubemapArray__Fields_DEFINED)
#define IL2CPP_STRUCT_CubemapArray_DEFINED
struct CubemapArray__Class;
struct CubemapArray {
    struct CubemapArray__Class* klass;
    MonitorData* monitor;
    struct CubemapArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CubemapArray_FWDDECL)
#define IL2CPP_STRUCT_CubemapArray_FWDDECL
#include <Modloader/app/structs/CubemapArray__Class.h>
#endif
#undef IL2CPP_STRUCT_CubemapArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_CubemapArray_DEFINED) && !defined(IL2CPP_STRUCT_CubemapArray_FWDDECL)
#include <Modloader/app/structs/CubemapArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CubemapArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
