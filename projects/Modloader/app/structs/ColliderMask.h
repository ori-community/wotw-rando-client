#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColliderMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColliderMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderMask_DEFINED)
#include <Modloader/app/structs/ColliderMask__Fields.h>
#if defined(IL2CPP_STRUCT_ColliderMask__Fields_DEFINED)
#define IL2CPP_STRUCT_ColliderMask_DEFINED
struct ColliderMask__Class;
struct ColliderMask {
    struct ColliderMask__Class* klass;
    MonitorData* monitor;
    struct ColliderMask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColliderMask_FWDDECL)
#define IL2CPP_STRUCT_ColliderMask_FWDDECL
#include <Modloader/app/structs/ColliderMask__Class.h>
#endif
#undef IL2CPP_STRUCT_ColliderMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderMask_DEFINED) && !defined(IL2CPP_STRUCT_ColliderMask_FWDDECL)
#include <Modloader/app/structs/ColliderMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColliderMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
