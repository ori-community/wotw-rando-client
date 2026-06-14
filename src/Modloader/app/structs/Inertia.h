#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inertia_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inertia_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_DEFINED)
#include <Modloader/app/structs/Inertia__Fields.h>
#if defined(IL2CPP_STRUCT_Inertia__Fields_DEFINED)
#define IL2CPP_STRUCT_Inertia_DEFINED
struct Inertia__Class;
struct Inertia {
    struct Inertia__Class* klass;
    MonitorData* monitor;
    struct Inertia__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inertia_FWDDECL)
#define IL2CPP_STRUCT_Inertia_FWDDECL
#include <Modloader/app/structs/Inertia__Class.h>
#endif
#undef IL2CPP_STRUCT_Inertia_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_DEFINED) && !defined(IL2CPP_STRUCT_Inertia_FWDDECL)
#include <Modloader/app/structs/Inertia.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inertia.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
