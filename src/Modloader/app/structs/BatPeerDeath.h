#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatPeerDeath_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatPeerDeath_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatPeerDeath_DEFINED)
#include <Modloader/app/structs/BatPeerDeath__Fields.h>
#if defined(IL2CPP_STRUCT_BatPeerDeath__Fields_DEFINED)
#define IL2CPP_STRUCT_BatPeerDeath_DEFINED
struct BatPeerDeath__Class;
struct BatPeerDeath {
    struct BatPeerDeath__Class* klass;
    MonitorData* monitor;
    struct BatPeerDeath__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatPeerDeath_FWDDECL)
#define IL2CPP_STRUCT_BatPeerDeath_FWDDECL
#include <Modloader/app/structs/BatPeerDeath__Class.h>
#endif
#undef IL2CPP_STRUCT_BatPeerDeath_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatPeerDeath_DEFINED) && !defined(IL2CPP_STRUCT_BatPeerDeath_FWDDECL)
#include <Modloader/app/structs/BatPeerDeath.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatPeerDeath.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
