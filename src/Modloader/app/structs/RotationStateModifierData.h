#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationStateModifierData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationStateModifierData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationStateModifierData_DEFINED)
#include <Modloader/app/structs/RotationStateModifierData__Fields.h>
#if defined(IL2CPP_STRUCT_RotationStateModifierData__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationStateModifierData_DEFINED
struct RotationStateModifierData__Class;
struct RotationStateModifierData {
    struct RotationStateModifierData__Class* klass;
    MonitorData* monitor;
    struct RotationStateModifierData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationStateModifierData_FWDDECL)
#define IL2CPP_STRUCT_RotationStateModifierData_FWDDECL
#include <Modloader/app/structs/RotationStateModifierData__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationStateModifierData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationStateModifierData_DEFINED) && !defined(IL2CPP_STRUCT_RotationStateModifierData_FWDDECL)
#include <Modloader/app/structs/RotationStateModifierData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationStateModifierData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
