#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Kickback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Kickback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Kickback_DEFINED)
#include <Modloader/app/structs/Kickback__Fields.h>
#if defined(IL2CPP_STRUCT_Kickback__Fields_DEFINED)
#define IL2CPP_STRUCT_Kickback_DEFINED
struct Kickback__Class;
struct Kickback {
    struct Kickback__Class* klass;
    MonitorData* monitor;
    struct Kickback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Kickback_FWDDECL)
#define IL2CPP_STRUCT_Kickback_FWDDECL
#include <Modloader/app/structs/Kickback__Class.h>
#endif
#undef IL2CPP_STRUCT_Kickback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Kickback_DEFINED) && !defined(IL2CPP_STRUCT_Kickback_FWDDECL)
#include <Modloader/app/structs/Kickback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Kickback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
