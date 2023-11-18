#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RasterState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RasterState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RasterState__Boxed_DEFINED)
#include <Modloader/app/structs/RasterState.h>
#if defined(IL2CPP_STRUCT_RasterState_DEFINED)
#define IL2CPP_STRUCT_RasterState__Boxed_DEFINED
struct RasterState__Class;
struct RasterState__Boxed {
    struct RasterState__Class* klass;
    MonitorData* monitor;
    struct RasterState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RasterState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RasterState__Boxed_FWDDECL
#include <Modloader/app/structs/RasterState__Class.h>
#endif
#undef IL2CPP_STRUCT_RasterState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RasterState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RasterState__Boxed_FWDDECL)
#include <Modloader/app/structs/RasterState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RasterState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
