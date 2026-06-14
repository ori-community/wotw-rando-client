#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Collision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Collision_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision_DEFINED)
#include <Modloader/app/structs/Collision__Fields.h>
#if defined(IL2CPP_STRUCT_Collision__Fields_DEFINED)
#define IL2CPP_STRUCT_Collision_DEFINED
struct Collision__Class;
struct Collision {
    struct Collision__Class* klass;
    MonitorData* monitor;
    struct Collision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Collision_FWDDECL)
#define IL2CPP_STRUCT_Collision_FWDDECL
#include <Modloader/app/structs/Collision__Class.h>
#endif
#undef IL2CPP_STRUCT_Collision_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision_DEFINED) && !defined(IL2CPP_STRUCT_Collision_FWDDECL)
#include <Modloader/app/structs/Collision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Collision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
