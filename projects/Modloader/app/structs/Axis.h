#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Axis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Axis_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis_DEFINED)
#include <Modloader/app/structs/Axis__Fields.h>
#if defined(IL2CPP_STRUCT_Axis__Fields_DEFINED)
#define IL2CPP_STRUCT_Axis_DEFINED
struct Axis__Class;
struct Axis {
    struct Axis__Class* klass;
    MonitorData* monitor;
    struct Axis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Axis_FWDDECL)
#define IL2CPP_STRUCT_Axis_FWDDECL
#include <Modloader/app/structs/Axis__Class.h>
#endif
#undef IL2CPP_STRUCT_Axis_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis_DEFINED) && !defined(IL2CPP_STRUCT_Axis_FWDDECL)
#include <Modloader/app/structs/Axis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Axis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
