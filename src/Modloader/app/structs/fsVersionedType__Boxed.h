#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsVersionedType__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsVersionedType__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionedType__Boxed_DEFINED)
#include <Modloader/app/structs/fsVersionedType.h>
#if defined(IL2CPP_STRUCT_fsVersionedType_DEFINED)
#define IL2CPP_STRUCT_fsVersionedType__Boxed_DEFINED
struct fsVersionedType__Class;
struct fsVersionedType__Boxed {
    struct fsVersionedType__Class* klass;
    MonitorData* monitor;
    struct fsVersionedType fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsVersionedType__Boxed_FWDDECL)
#define IL2CPP_STRUCT_fsVersionedType__Boxed_FWDDECL
#include <Modloader/app/structs/fsVersionedType__Class.h>
#endif
#undef IL2CPP_STRUCT_fsVersionedType__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionedType__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_fsVersionedType__Boxed_FWDDECL)
#include <Modloader/app/structs/fsVersionedType__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsVersionedType__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
