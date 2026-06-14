#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Triangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Triangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Triangle_DEFINED)
#include <Modloader/app/structs/P3D_Triangle__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Triangle__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Triangle_DEFINED
struct P3D_Triangle__Class;
struct P3D_Triangle {
    struct P3D_Triangle__Class* klass;
    MonitorData* monitor;
    struct P3D_Triangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Triangle_FWDDECL)
#define IL2CPP_STRUCT_P3D_Triangle_FWDDECL
#include <Modloader/app/structs/P3D_Triangle__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Triangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Triangle_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Triangle_FWDDECL)
#include <Modloader/app/structs/P3D_Triangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Triangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
