#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HomingMissile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HomingMissile_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingMissile_DEFINED)
#include <Modloader/app/structs/HomingMissile__Fields.h>
#if defined(IL2CPP_STRUCT_HomingMissile__Fields_DEFINED)
#define IL2CPP_STRUCT_HomingMissile_DEFINED
struct HomingMissile__Class;
struct HomingMissile {
    struct HomingMissile__Class* klass;
    MonitorData* monitor;
    struct HomingMissile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HomingMissile_FWDDECL)
#define IL2CPP_STRUCT_HomingMissile_FWDDECL
#include <Modloader/app/structs/HomingMissile__Class.h>
#endif
#undef IL2CPP_STRUCT_HomingMissile_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingMissile_DEFINED) && !defined(IL2CPP_STRUCT_HomingMissile_FWDDECL)
#include <Modloader/app/structs/HomingMissile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HomingMissile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
