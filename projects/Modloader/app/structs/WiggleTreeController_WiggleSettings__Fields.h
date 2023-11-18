#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_DEFINED
struct ActionMethod;
struct __declspec(align(8)) WiggleTreeController_WiggleSettings__Fields {
    float TargetAngle;
    struct ActionMethod* OnWiggleEnded;
};
#endif
#if !defined(IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WiggleTreeController_WiggleSettings__Fields_FWDDECL)
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
