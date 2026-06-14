#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionAbsorb_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionAbsorb_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorb_DEFINED)
#include <Modloader/app/structs/MotionAbsorb__Fields.h>
#if defined(IL2CPP_STRUCT_MotionAbsorb__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionAbsorb_DEFINED
struct MotionAbsorb__Class;
struct MotionAbsorb {
    struct MotionAbsorb__Class* klass;
    MonitorData* monitor;
    struct MotionAbsorb__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionAbsorb_FWDDECL)
#define IL2CPP_STRUCT_MotionAbsorb_FWDDECL
#include <Modloader/app/structs/MotionAbsorb__Class.h>
#endif
#undef IL2CPP_STRUCT_MotionAbsorb_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorb_DEFINED) && !defined(IL2CPP_STRUCT_MotionAbsorb_FWDDECL)
#include <Modloader/app/structs/MotionAbsorb.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionAbsorb.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
