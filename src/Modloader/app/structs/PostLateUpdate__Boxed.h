#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostLateUpdate__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostLateUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostLateUpdate__Boxed_DEFINED)
#include <Modloader/app/structs/PostLateUpdate.h>
#if defined(IL2CPP_STRUCT_PostLateUpdate_DEFINED)
#define IL2CPP_STRUCT_PostLateUpdate__Boxed_DEFINED
struct PostLateUpdate__Class;
struct PostLateUpdate__Boxed {
    struct PostLateUpdate__Class* klass;
    MonitorData* monitor;
    struct PostLateUpdate fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostLateUpdate__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PostLateUpdate__Boxed_FWDDECL
#include <Modloader/app/structs/PostLateUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_PostLateUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostLateUpdate__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PostLateUpdate__Boxed_FWDDECL)
#include <Modloader/app/structs/PostLateUpdate__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostLateUpdate__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
