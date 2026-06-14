#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_DEFINED)
#include <Modloader/app/structs/IgnoreCollisionsHelper.h>
#if defined(IL2CPP_STRUCT_IgnoreCollisionsHelper_DEFINED)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_DEFINED
struct IgnoreCollisionsHelper__Class;
struct IgnoreCollisionsHelper__Boxed {
    struct IgnoreCollisionsHelper__Class* klass;
    MonitorData* monitor;
    struct IgnoreCollisionsHelper fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_FWDDECL
#include <Modloader/app/structs/IgnoreCollisionsHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper__Boxed_FWDDECL)
#include <Modloader/app/structs/IgnoreCollisionsHelper__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreCollisionsHelper__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
