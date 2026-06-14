#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForwardAxis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForwardAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForwardAxis_DEFINED)
#include <Modloader/app/structs/ForwardAxis__Fields.h>
#if defined(IL2CPP_STRUCT_ForwardAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_ForwardAxis_DEFINED
struct ForwardAxis__Class;
struct ForwardAxis {
    struct ForwardAxis__Class* klass;
    MonitorData* monitor;
    struct ForwardAxis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForwardAxis_FWDDECL)
#define IL2CPP_STRUCT_ForwardAxis_FWDDECL
#include <Modloader/app/structs/ForwardAxis__Class.h>
#endif
#undef IL2CPP_STRUCT_ForwardAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForwardAxis_DEFINED) && !defined(IL2CPP_STRUCT_ForwardAxis_FWDDECL)
#include <Modloader/app/structs/ForwardAxis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForwardAxis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
