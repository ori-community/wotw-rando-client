#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimit_DEFINED)
#include <Modloader/app/structs/RotationLimit__Fields.h>
#if defined(IL2CPP_STRUCT_RotationLimit__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationLimit_DEFINED
struct RotationLimit__Class;
struct RotationLimit {
    struct RotationLimit__Class* klass;
    MonitorData* monitor;
    struct RotationLimit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimit_FWDDECL)
#define IL2CPP_STRUCT_RotationLimit_FWDDECL
#include <Modloader/app/structs/RotationLimit__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimit_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimit_FWDDECL)
#include <Modloader/app/structs/RotationLimit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
