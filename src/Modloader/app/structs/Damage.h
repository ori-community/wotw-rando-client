#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Damage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Damage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Damage_DEFINED)
#include <Modloader/app/structs/Damage__Fields.h>
#if defined(IL2CPP_STRUCT_Damage__Fields_DEFINED)
#define IL2CPP_STRUCT_Damage_DEFINED
struct Damage__Class;
struct Damage {
    struct Damage__Class* klass;
    MonitorData* monitor;
    struct Damage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Damage_FWDDECL)
#define IL2CPP_STRUCT_Damage_FWDDECL
#include <Modloader/app/structs/Damage__Class.h>
#endif
#undef IL2CPP_STRUCT_Damage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Damage_DEFINED) && !defined(IL2CPP_STRUCT_Damage_FWDDECL)
#include <Modloader/app/structs/Damage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Damage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
