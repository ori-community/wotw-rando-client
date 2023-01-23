#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreCollision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollision_DEFINED)
#include <Modloader/app/structs/IgnoreCollision__Fields.h>
#if defined(IL2CPP_STRUCT_IgnoreCollision__Fields_DEFINED)
#define IL2CPP_STRUCT_IgnoreCollision_DEFINED
struct IgnoreCollision__Class;
struct IgnoreCollision {
    struct IgnoreCollision__Class* klass;
    MonitorData* monitor;
    struct IgnoreCollision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnoreCollision_FWDDECL)
#define IL2CPP_STRUCT_IgnoreCollision_FWDDECL
#include <Modloader/app/structs/IgnoreCollision__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollision_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreCollision_FWDDECL)
#include <Modloader/app/structs/IgnoreCollision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreCollision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
