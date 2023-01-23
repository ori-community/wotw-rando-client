#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaVinePhysics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaVinePhysics_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaVinePhysics_DEFINED)
#include <Modloader/app/structs/LianaVinePhysics__Fields.h>
#if defined(IL2CPP_STRUCT_LianaVinePhysics__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaVinePhysics_DEFINED
struct LianaVinePhysics__Class;
struct LianaVinePhysics {
    struct LianaVinePhysics__Class* klass;
    MonitorData* monitor;
    struct LianaVinePhysics__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaVinePhysics_FWDDECL)
#define IL2CPP_STRUCT_LianaVinePhysics_FWDDECL
#include <Modloader/app/structs/LianaVinePhysics__Class.h>
#endif
#undef IL2CPP_STRUCT_LianaVinePhysics_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaVinePhysics_DEFINED) && !defined(IL2CPP_STRUCT_LianaVinePhysics_FWDDECL)
#include <Modloader/app/structs/LianaVinePhysics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaVinePhysics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
