#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Node_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Node_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Node_DEFINED)
#include <Modloader/app/structs/P3D_Node__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Node__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Node_DEFINED
struct P3D_Node__Class;
struct P3D_Node {
    struct P3D_Node__Class* klass;
    MonitorData* monitor;
    struct P3D_Node__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Node_FWDDECL)
#define IL2CPP_STRUCT_P3D_Node_FWDDECL
#include <Modloader/app/structs/P3D_Node__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Node_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Node_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Node_FWDDECL)
#include <Modloader/app/structs/P3D_Node.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Node.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
