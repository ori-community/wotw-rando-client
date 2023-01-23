#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShieldCollision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShieldCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShieldCollision_DEFINED)
#include <Modloader/app/structs/ShieldCollision__Fields.h>
#if defined(IL2CPP_STRUCT_ShieldCollision__Fields_DEFINED)
#define IL2CPP_STRUCT_ShieldCollision_DEFINED
struct ShieldCollision__Class;
struct ShieldCollision {
    struct ShieldCollision__Class* klass;
    MonitorData* monitor;
    struct ShieldCollision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShieldCollision_FWDDECL)
#define IL2CPP_STRUCT_ShieldCollision_FWDDECL
#include <Modloader/app/structs/ShieldCollision__Class.h>
#endif
#undef IL2CPP_STRUCT_ShieldCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShieldCollision_DEFINED) && !defined(IL2CPP_STRUCT_ShieldCollision_FWDDECL)
#include <Modloader/app/structs/ShieldCollision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShieldCollision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
