#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpolateCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpolateCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolateCollider_DEFINED)
#include <Modloader/app/structs/InterpolateCollider__Fields.h>
#if defined(IL2CPP_STRUCT_InterpolateCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_InterpolateCollider_DEFINED
struct InterpolateCollider__Class;
struct InterpolateCollider {
    struct InterpolateCollider__Class* klass;
    MonitorData* monitor;
    struct InterpolateCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterpolateCollider_FWDDECL)
#define IL2CPP_STRUCT_InterpolateCollider_FWDDECL
#include <Modloader/app/structs/InterpolateCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_InterpolateCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolateCollider_DEFINED) && !defined(IL2CPP_STRUCT_InterpolateCollider_FWDDECL)
#include <Modloader/app/structs/InterpolateCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpolateCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
