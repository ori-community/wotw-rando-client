#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlur_DEFINED)
#include <Modloader/app/structs/MotionBlur__Fields.h>
#if defined(IL2CPP_STRUCT_MotionBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlur_DEFINED
struct MotionBlur__Class;
struct MotionBlur {
    struct MotionBlur__Class* klass;
    MonitorData* monitor;
    struct MotionBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlur_FWDDECL)
#define IL2CPP_STRUCT_MotionBlur_FWDDECL
#include <Modloader/app/structs/MotionBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_MotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlur_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlur_FWDDECL)
#include <Modloader/app/structs/MotionBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
