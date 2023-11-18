#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimitSpline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimitSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitSpline_DEFINED)
#include <Modloader/app/structs/RotationLimitSpline__Fields.h>
#if defined(IL2CPP_STRUCT_RotationLimitSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationLimitSpline_DEFINED
struct RotationLimitSpline__Class;
struct RotationLimitSpline {
    struct RotationLimitSpline__Class* klass;
    MonitorData* monitor;
    struct RotationLimitSpline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimitSpline_FWDDECL)
#define IL2CPP_STRUCT_RotationLimitSpline_FWDDECL
#include <Modloader/app/structs/RotationLimitSpline__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationLimitSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitSpline_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimitSpline_FWDDECL)
#include <Modloader/app/structs/RotationLimitSpline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimitSpline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
