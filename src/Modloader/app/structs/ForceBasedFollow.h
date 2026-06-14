#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForceBasedFollow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForceBasedFollow_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceBasedFollow_DEFINED)
#include <Modloader/app/structs/ForceBasedFollow__Fields.h>
#if defined(IL2CPP_STRUCT_ForceBasedFollow__Fields_DEFINED)
#define IL2CPP_STRUCT_ForceBasedFollow_DEFINED
struct ForceBasedFollow__Class;
struct ForceBasedFollow {
    struct ForceBasedFollow__Class* klass;
    MonitorData* monitor;
    struct ForceBasedFollow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForceBasedFollow_FWDDECL)
#define IL2CPP_STRUCT_ForceBasedFollow_FWDDECL
#include <Modloader/app/structs/ForceBasedFollow__Class.h>
#endif
#undef IL2CPP_STRUCT_ForceBasedFollow_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceBasedFollow_DEFINED) && !defined(IL2CPP_STRUCT_ForceBasedFollow_FWDDECL)
#include <Modloader/app/structs/ForceBasedFollow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForceBasedFollow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
