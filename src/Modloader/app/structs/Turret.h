#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Turret_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Turret_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_DEFINED)
#include <Modloader/app/structs/Turret__Fields.h>
#if defined(IL2CPP_STRUCT_Turret__Fields_DEFINED)
#define IL2CPP_STRUCT_Turret_DEFINED
struct Turret__Class;
struct Turret {
    struct Turret__Class* klass;
    MonitorData* monitor;
    struct Turret__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Turret_FWDDECL)
#define IL2CPP_STRUCT_Turret_FWDDECL
#include <Modloader/app/structs/Turret__Class.h>
#endif
#undef IL2CPP_STRUCT_Turret_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_DEFINED) && !defined(IL2CPP_STRUCT_Turret_FWDDECL)
#include <Modloader/app/structs/Turret.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Turret.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
