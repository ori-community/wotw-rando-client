#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) SwitchController_VibrationDataEntry__Fields {
    struct String* name;
    uint32_t id;
    int32_t length;
    int32_t offset;
    float modifier;
    bool enabled;
    struct Byte__Array* data;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchController_VibrationDataEntry__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchController_VibrationDataEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchController_VibrationDataEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
