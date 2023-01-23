#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyUpdate__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyUpdate__Boxed_DEFINED)
#include <Modloader/app/structs/EarlyUpdate.h>
#if defined(IL2CPP_STRUCT_EarlyUpdate_DEFINED)
#define IL2CPP_STRUCT_EarlyUpdate__Boxed_DEFINED
struct EarlyUpdate__Class;
struct EarlyUpdate__Boxed {
    struct EarlyUpdate__Class* klass;
    MonitorData* monitor;
    struct EarlyUpdate fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyUpdate__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EarlyUpdate__Boxed_FWDDECL
#include <Modloader/app/structs/EarlyUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_EarlyUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyUpdate__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EarlyUpdate__Boxed_FWDDECL)
#include <Modloader/app/structs/EarlyUpdate__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyUpdate__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
