#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BodyTilt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BodyTilt_INITIALIZING
#if !defined(IL2CPP_STRUCT_BodyTilt_DEFINED)
#include <Modloader/app/structs/BodyTilt__Fields.h>
#if defined(IL2CPP_STRUCT_BodyTilt__Fields_DEFINED)
#define IL2CPP_STRUCT_BodyTilt_DEFINED
struct BodyTilt__Class;
struct BodyTilt {
    struct BodyTilt__Class* klass;
    MonitorData* monitor;
    struct BodyTilt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BodyTilt_FWDDECL)
#define IL2CPP_STRUCT_BodyTilt_FWDDECL
#include <Modloader/app/structs/BodyTilt__Class.h>
#endif
#undef IL2CPP_STRUCT_BodyTilt_INITIALIZING
#if !defined(IL2CPP_STRUCT_BodyTilt_DEFINED) && !defined(IL2CPP_STRUCT_BodyTilt_FWDDECL)
#include <Modloader/app/structs/BodyTilt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BodyTilt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
