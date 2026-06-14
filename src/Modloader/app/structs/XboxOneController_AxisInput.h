#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneController_AxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneController_AxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_AxisInput_DEFINED)
#include <Modloader/app/structs/XboxOneController_AxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneController_AxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneController_AxisInput_DEFINED
struct XboxOneController_AxisInput__Class;
struct XboxOneController_AxisInput {
    struct XboxOneController_AxisInput__Class* klass;
    MonitorData* monitor;
    struct XboxOneController_AxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneController_AxisInput_FWDDECL)
#define IL2CPP_STRUCT_XboxOneController_AxisInput_FWDDECL
#include <Modloader/app/structs/XboxOneController_AxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneController_AxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_AxisInput_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneController_AxisInput_FWDDECL)
#include <Modloader/app/structs/XboxOneController_AxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneController_AxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
