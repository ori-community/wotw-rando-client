#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Suspendable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Suspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Suspendable_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_Suspendable_DEFINED
struct Suspendable__Class;
struct Suspendable {
    struct Suspendable__Class* klass;
    MonitorData* monitor;
    struct Suspendable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Suspendable_FWDDECL)
#define IL2CPP_STRUCT_Suspendable_FWDDECL
#include <Modloader/app/structs/Suspendable__Class.h>
#endif
#undef IL2CPP_STRUCT_Suspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Suspendable_DEFINED) && !defined(IL2CPP_STRUCT_Suspendable_FWDDECL)
#include <Modloader/app/structs/Suspendable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Suspendable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
