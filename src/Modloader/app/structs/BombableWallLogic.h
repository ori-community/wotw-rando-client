#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableWallLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableWallLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallLogic_DEFINED)
#include <Modloader/app/structs/BombableWallLogic__Fields.h>
#if defined(IL2CPP_STRUCT_BombableWallLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableWallLogic_DEFINED
struct BombableWallLogic__Class;
struct BombableWallLogic {
    struct BombableWallLogic__Class* klass;
    MonitorData* monitor;
    struct BombableWallLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableWallLogic_FWDDECL)
#define IL2CPP_STRUCT_BombableWallLogic_FWDDECL
#include <Modloader/app/structs/BombableWallLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_BombableWallLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallLogic_DEFINED) && !defined(IL2CPP_STRUCT_BombableWallLogic_FWDDECL)
#include <Modloader/app/structs/BombableWallLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableWallLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
