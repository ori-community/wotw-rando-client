#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectBasedMotionBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectBasedMotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectBasedMotionBlur_DEFINED)
#include <Modloader/app/structs/ObjectBasedMotionBlur__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectBasedMotionBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectBasedMotionBlur_DEFINED
struct ObjectBasedMotionBlur__Class;
struct ObjectBasedMotionBlur {
    struct ObjectBasedMotionBlur__Class* klass;
    MonitorData* monitor;
    struct ObjectBasedMotionBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectBasedMotionBlur_FWDDECL)
#define IL2CPP_STRUCT_ObjectBasedMotionBlur_FWDDECL
#include <Modloader/app/structs/ObjectBasedMotionBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectBasedMotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectBasedMotionBlur_DEFINED) && !defined(IL2CPP_STRUCT_ObjectBasedMotionBlur_FWDDECL)
#include <Modloader/app/structs/ObjectBasedMotionBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectBasedMotionBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
