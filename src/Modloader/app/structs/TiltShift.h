#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TiltShift_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TiltShift_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiltShift_DEFINED)
#include <Modloader/app/structs/TiltShift__Fields.h>
#if defined(IL2CPP_STRUCT_TiltShift__Fields_DEFINED)
#define IL2CPP_STRUCT_TiltShift_DEFINED
struct TiltShift__Class;
struct TiltShift {
    struct TiltShift__Class* klass;
    MonitorData* monitor;
    struct TiltShift__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TiltShift_FWDDECL)
#define IL2CPP_STRUCT_TiltShift_FWDDECL
#include <Modloader/app/structs/TiltShift__Class.h>
#endif
#undef IL2CPP_STRUCT_TiltShift_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiltShift_DEFINED) && !defined(IL2CPP_STRUCT_TiltShift_FWDDECL)
#include <Modloader/app/structs/TiltShift.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TiltShift.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
