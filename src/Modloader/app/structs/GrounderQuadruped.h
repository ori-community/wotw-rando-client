#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderQuadruped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderQuadruped_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_DEFINED)
#include <Modloader/app/structs/GrounderQuadruped__Fields.h>
#if defined(IL2CPP_STRUCT_GrounderQuadruped__Fields_DEFINED)
#define IL2CPP_STRUCT_GrounderQuadruped_DEFINED
struct GrounderQuadruped__Class;
struct GrounderQuadruped {
    struct GrounderQuadruped__Class* klass;
    MonitorData* monitor;
    struct GrounderQuadruped__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_FWDDECL)
#define IL2CPP_STRUCT_GrounderQuadruped_FWDDECL
#include <Modloader/app/structs/GrounderQuadruped__Class.h>
#endif
#undef IL2CPP_STRUCT_GrounderQuadruped_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_DEFINED) && !defined(IL2CPP_STRUCT_GrounderQuadruped_FWDDECL)
#include <Modloader/app/structs/GrounderQuadruped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderQuadruped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
