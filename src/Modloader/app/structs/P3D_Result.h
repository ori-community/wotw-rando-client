#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Result_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Result_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Result_DEFINED)
#include <Modloader/app/structs/P3D_Result__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Result__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Result_DEFINED
struct P3D_Result__Class;
struct P3D_Result {
    struct P3D_Result__Class* klass;
    MonitorData* monitor;
    struct P3D_Result__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Result_FWDDECL)
#define IL2CPP_STRUCT_P3D_Result_FWDDECL
#include <Modloader/app/structs/P3D_Result__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Result_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Result_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Result_FWDDECL)
#include <Modloader/app/structs/P3D_Result.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Result.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
