#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisButtonInput_DEFINED)
#include <Modloader/app/structs/AxisButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_AxisButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisButtonInput_DEFINED
struct AxisButtonInput__Class;
struct AxisButtonInput {
    struct AxisButtonInput__Class* klass;
    MonitorData* monitor;
    struct AxisButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisButtonInput_FWDDECL)
#define IL2CPP_STRUCT_AxisButtonInput_FWDDECL
#include <Modloader/app/structs/AxisButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_AxisButtonInput_FWDDECL)
#include <Modloader/app/structs/AxisButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
