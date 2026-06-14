#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindCollision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindCollision_DEFINED)
#include <Modloader/app/structs/WindCollision__Fields.h>
#if defined(IL2CPP_STRUCT_WindCollision__Fields_DEFINED)
#define IL2CPP_STRUCT_WindCollision_DEFINED
struct WindCollision__Class;
struct WindCollision {
    struct WindCollision__Class* klass;
    MonitorData* monitor;
    struct WindCollision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindCollision_FWDDECL)
#define IL2CPP_STRUCT_WindCollision_FWDDECL
#include <Modloader/app/structs/WindCollision__Class.h>
#endif
#undef IL2CPP_STRUCT_WindCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindCollision_DEFINED) && !defined(IL2CPP_STRUCT_WindCollision_FWDDECL)
#include <Modloader/app/structs/WindCollision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindCollision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
