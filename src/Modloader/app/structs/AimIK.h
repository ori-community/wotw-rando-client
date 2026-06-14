#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimIK_DEFINED)
#include <Modloader/app/structs/AimIK__Fields.h>
#if defined(IL2CPP_STRUCT_AimIK__Fields_DEFINED)
#define IL2CPP_STRUCT_AimIK_DEFINED
struct AimIK__Class;
struct AimIK {
    struct AimIK__Class* klass;
    MonitorData* monitor;
    struct AimIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimIK_FWDDECL)
#define IL2CPP_STRUCT_AimIK_FWDDECL
#include <Modloader/app/structs/AimIK__Class.h>
#endif
#undef IL2CPP_STRUCT_AimIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimIK_DEFINED) && !defined(IL2CPP_STRUCT_AimIK_FWDDECL)
#include <Modloader/app/structs/AimIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
