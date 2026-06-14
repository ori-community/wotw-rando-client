#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisInput_DEFINED)
#include <Modloader/app/structs/AxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_AxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisInput_DEFINED
struct AxisInput__Class;
struct AxisInput {
    struct AxisInput__Class* klass;
    MonitorData* monitor;
    struct AxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisInput_FWDDECL)
#define IL2CPP_STRUCT_AxisInput_FWDDECL
#include <Modloader/app/structs/AxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisInput_DEFINED) && !defined(IL2CPP_STRUCT_AxisInput_FWDDECL)
#include <Modloader/app/structs/AxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
