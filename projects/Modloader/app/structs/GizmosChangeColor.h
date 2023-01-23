#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GizmosChangeColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GizmosChangeColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmosChangeColor_DEFINED)
#include <Modloader/app/structs/GizmosChangeColor__Fields.h>
#if defined(IL2CPP_STRUCT_GizmosChangeColor__Fields_DEFINED)
#define IL2CPP_STRUCT_GizmosChangeColor_DEFINED
struct GizmosChangeColor__Class;
struct GizmosChangeColor {
    struct GizmosChangeColor__Class* klass;
    MonitorData* monitor;
    struct GizmosChangeColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GizmosChangeColor_FWDDECL)
#define IL2CPP_STRUCT_GizmosChangeColor_FWDDECL
#include <Modloader/app/structs/GizmosChangeColor__Class.h>
#endif
#undef IL2CPP_STRUCT_GizmosChangeColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmosChangeColor_DEFINED) && !defined(IL2CPP_STRUCT_GizmosChangeColor_FWDDECL)
#include <Modloader/app/structs/GizmosChangeColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GizmosChangeColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
