#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Fisheye_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Fisheye_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fisheye_DEFINED)
#include <Modloader/app/structs/Fisheye__Fields.h>
#if defined(IL2CPP_STRUCT_Fisheye__Fields_DEFINED)
#define IL2CPP_STRUCT_Fisheye_DEFINED
struct Fisheye__Class;
struct Fisheye {
    struct Fisheye__Class* klass;
    MonitorData* monitor;
    struct Fisheye__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Fisheye_FWDDECL)
#define IL2CPP_STRUCT_Fisheye_FWDDECL
#include <Modloader/app/structs/Fisheye__Class.h>
#endif
#undef IL2CPP_STRUCT_Fisheye_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fisheye_DEFINED) && !defined(IL2CPP_STRUCT_Fisheye_FWDDECL)
#include <Modloader/app/structs/Fisheye.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Fisheye.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
