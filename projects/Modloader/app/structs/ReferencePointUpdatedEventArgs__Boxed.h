#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs.h>
#if defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_DEFINED)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_DEFINED
struct ReferencePointUpdatedEventArgs__Class;
struct ReferencePointUpdatedEventArgs__Boxed {
    struct ReferencePointUpdatedEventArgs__Class* klass;
    MonitorData* monitor;
    struct ReferencePointUpdatedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
