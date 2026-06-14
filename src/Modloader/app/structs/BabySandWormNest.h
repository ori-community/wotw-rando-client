#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySandWormNest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySandWormNest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySandWormNest_DEFINED)
#include <Modloader/app/structs/BabySandWormNest__Fields.h>
#if defined(IL2CPP_STRUCT_BabySandWormNest__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySandWormNest_DEFINED
struct BabySandWormNest__Class;
struct BabySandWormNest {
    struct BabySandWormNest__Class* klass;
    MonitorData* monitor;
    struct BabySandWormNest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySandWormNest_FWDDECL)
#define IL2CPP_STRUCT_BabySandWormNest_FWDDECL
#include <Modloader/app/structs/BabySandWormNest__Class.h>
#endif
#undef IL2CPP_STRUCT_BabySandWormNest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySandWormNest_DEFINED) && !defined(IL2CPP_STRUCT_BabySandWormNest_FWDDECL)
#include <Modloader/app/structs/BabySandWormNest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySandWormNest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
