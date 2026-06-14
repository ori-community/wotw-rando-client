#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimBoxing_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimBoxing_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimBoxing_DEFINED)
#include <Modloader/app/structs/AimBoxing__Fields.h>
#if defined(IL2CPP_STRUCT_AimBoxing__Fields_DEFINED)
#define IL2CPP_STRUCT_AimBoxing_DEFINED
struct AimBoxing__Class;
struct AimBoxing {
    struct AimBoxing__Class* klass;
    MonitorData* monitor;
    struct AimBoxing__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimBoxing_FWDDECL)
#define IL2CPP_STRUCT_AimBoxing_FWDDECL
#include <Modloader/app/structs/AimBoxing__Class.h>
#endif
#undef IL2CPP_STRUCT_AimBoxing_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimBoxing_DEFINED) && !defined(IL2CPP_STRUCT_AimBoxing_FWDDECL)
#include <Modloader/app/structs/AimBoxing.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimBoxing.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
