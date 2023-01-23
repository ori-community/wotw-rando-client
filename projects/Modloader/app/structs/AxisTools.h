#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisTools_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisTools_DEFINED)
#define IL2CPP_STRUCT_AxisTools_DEFINED
struct AxisTools__Class;
struct AxisTools {
    struct AxisTools__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AxisTools_FWDDECL)
#define IL2CPP_STRUCT_AxisTools_FWDDECL
#include <Modloader/app/structs/AxisTools__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisTools_DEFINED) && !defined(IL2CPP_STRUCT_AxisTools_FWDDECL)
#include <Modloader/app/structs/AxisTools.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisTools.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
