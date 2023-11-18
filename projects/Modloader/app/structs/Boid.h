#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Boid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Boid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boid_DEFINED)
#include <Modloader/app/structs/Boid__Fields.h>
#if defined(IL2CPP_STRUCT_Boid__Fields_DEFINED)
#define IL2CPP_STRUCT_Boid_DEFINED
struct Boid__Class;
struct Boid {
    struct Boid__Class* klass;
    MonitorData* monitor;
    struct Boid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Boid_FWDDECL)
#define IL2CPP_STRUCT_Boid_FWDDECL
#include <Modloader/app/structs/Boid__Class.h>
#endif
#undef IL2CPP_STRUCT_Boid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boid_DEFINED) && !defined(IL2CPP_STRUCT_Boid_FWDDECL)
#include <Modloader/app/structs/Boid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Boid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
