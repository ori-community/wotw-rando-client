#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdate__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdate__Boxed_DEFINED)
#include <Modloader/app/structs/FixedUpdate.h>
#if defined(IL2CPP_STRUCT_FixedUpdate_DEFINED)
#define IL2CPP_STRUCT_FixedUpdate__Boxed_DEFINED
struct FixedUpdate__Class;
struct FixedUpdate__Boxed {
    struct FixedUpdate__Class* klass;
    MonitorData* monitor;
    struct FixedUpdate fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdate__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdate__Boxed_FWDDECL
#include <Modloader/app/structs/FixedUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdate__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdate__Boxed_FWDDECL)
#include <Modloader/app/structs/FixedUpdate__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdate__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
