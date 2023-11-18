#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Turret_Part_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Turret_Part_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_Part_DEFINED)
#include <Modloader/app/structs/Turret_Part__Fields.h>
#if defined(IL2CPP_STRUCT_Turret_Part__Fields_DEFINED)
#define IL2CPP_STRUCT_Turret_Part_DEFINED
struct Turret_Part__Class;
struct Turret_Part {
    struct Turret_Part__Class* klass;
    MonitorData* monitor;
    struct Turret_Part__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Turret_Part_FWDDECL)
#define IL2CPP_STRUCT_Turret_Part_FWDDECL
#include <Modloader/app/structs/Turret_Part__Class.h>
#endif
#undef IL2CPP_STRUCT_Turret_Part_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_Part_DEFINED) && !defined(IL2CPP_STRUCT_Turret_Part_FWDDECL)
#include <Modloader/app/structs/Turret_Part.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Turret_Part.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
