#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimitAngle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimitAngle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitAngle_DEFINED)
#include <Modloader/app/structs/RotationLimitAngle__Fields.h>
#if defined(IL2CPP_STRUCT_RotationLimitAngle__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationLimitAngle_DEFINED
struct RotationLimitAngle__Class;
struct RotationLimitAngle {
    struct RotationLimitAngle__Class* klass;
    MonitorData* monitor;
    struct RotationLimitAngle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimitAngle_FWDDECL)
#define IL2CPP_STRUCT_RotationLimitAngle_FWDDECL
#include <Modloader/app/structs/RotationLimitAngle__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationLimitAngle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitAngle_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimitAngle_FWDDECL)
#include <Modloader/app/structs/RotationLimitAngle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimitAngle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
