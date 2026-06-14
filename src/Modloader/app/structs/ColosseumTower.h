#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumTower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumTower_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTower_DEFINED)
#include <Modloader/app/structs/ColosseumTower__Fields.h>
#if defined(IL2CPP_STRUCT_ColosseumTower__Fields_DEFINED)
#define IL2CPP_STRUCT_ColosseumTower_DEFINED
struct ColosseumTower__Class;
struct ColosseumTower {
    struct ColosseumTower__Class* klass;
    MonitorData* monitor;
    struct ColosseumTower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColosseumTower_FWDDECL)
#define IL2CPP_STRUCT_ColosseumTower_FWDDECL
#include <Modloader/app/structs/ColosseumTower__Class.h>
#endif
#undef IL2CPP_STRUCT_ColosseumTower_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTower_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumTower_FWDDECL)
#include <Modloader/app/structs/ColosseumTower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumTower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
