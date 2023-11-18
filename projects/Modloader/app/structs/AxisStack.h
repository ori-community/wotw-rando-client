#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisStack_DEFINED)
#include <Modloader/app/structs/AxisStack__Fields.h>
#if defined(IL2CPP_STRUCT_AxisStack__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisStack_DEFINED
struct AxisStack__Class;
struct AxisStack {
    struct AxisStack__Class* klass;
    MonitorData* monitor;
    struct AxisStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisStack_FWDDECL)
#define IL2CPP_STRUCT_AxisStack_FWDDECL
#include <Modloader/app/structs/AxisStack__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisStack_DEFINED) && !defined(IL2CPP_STRUCT_AxisStack_FWDDECL)
#include <Modloader/app/structs/AxisStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
