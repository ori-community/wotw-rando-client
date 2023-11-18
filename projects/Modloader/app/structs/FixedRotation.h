#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRotation_DEFINED)
#include <Modloader/app/structs/FixedRotation__Fields.h>
#if defined(IL2CPP_STRUCT_FixedRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedRotation_DEFINED
struct FixedRotation__Class;
struct FixedRotation {
    struct FixedRotation__Class* klass;
    MonitorData* monitor;
    struct FixedRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedRotation_FWDDECL)
#define IL2CPP_STRUCT_FixedRotation_FWDDECL
#include <Modloader/app/structs/FixedRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRotation_DEFINED) && !defined(IL2CPP_STRUCT_FixedRotation_FWDDECL)
#include <Modloader/app/structs/FixedRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
