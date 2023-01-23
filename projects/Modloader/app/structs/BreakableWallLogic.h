#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakableWallLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakableWallLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallLogic_DEFINED)
#include <Modloader/app/structs/BreakableWallLogic__Fields.h>
#if defined(IL2CPP_STRUCT_BreakableWallLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakableWallLogic_DEFINED
struct BreakableWallLogic__Class;
struct BreakableWallLogic {
    struct BreakableWallLogic__Class* klass;
    MonitorData* monitor;
    struct BreakableWallLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakableWallLogic_FWDDECL)
#define IL2CPP_STRUCT_BreakableWallLogic_FWDDECL
#include <Modloader/app/structs/BreakableWallLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_BreakableWallLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallLogic_DEFINED) && !defined(IL2CPP_STRUCT_BreakableWallLogic_FWDDECL)
#include <Modloader/app/structs/BreakableWallLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakableWallLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
