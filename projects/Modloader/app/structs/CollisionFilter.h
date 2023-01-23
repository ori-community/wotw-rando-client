#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionFilter_DEFINED)
#include <Modloader/app/structs/CollisionFilter__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionFilter_DEFINED
struct CollisionFilter__Class;
struct CollisionFilter {
    struct CollisionFilter__Class* klass;
    MonitorData* monitor;
    struct CollisionFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionFilter_FWDDECL)
#define IL2CPP_STRUCT_CollisionFilter_FWDDECL
#include <Modloader/app/structs/CollisionFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionFilter_DEFINED) && !defined(IL2CPP_STRUCT_CollisionFilter_FWDDECL)
#include <Modloader/app/structs/CollisionFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
