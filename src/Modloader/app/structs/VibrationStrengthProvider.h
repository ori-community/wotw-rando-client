#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VibrationStrengthProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VibrationStrengthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VibrationStrengthProvider_DEFINED)
#include <Modloader/app/structs/VibrationStrengthProvider__Fields.h>
#if defined(IL2CPP_STRUCT_VibrationStrengthProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_VibrationStrengthProvider_DEFINED
struct VibrationStrengthProvider__Class;
struct VibrationStrengthProvider {
    struct VibrationStrengthProvider__Class* klass;
    MonitorData* monitor;
    struct VibrationStrengthProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VibrationStrengthProvider_FWDDECL)
#define IL2CPP_STRUCT_VibrationStrengthProvider_FWDDECL
#include <Modloader/app/structs/VibrationStrengthProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_VibrationStrengthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VibrationStrengthProvider_DEFINED) && !defined(IL2CPP_STRUCT_VibrationStrengthProvider_FWDDECL)
#include <Modloader/app/structs/VibrationStrengthProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VibrationStrengthProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
