#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic_DEFINED)
#include <Modloader/app/structs/SnapTrapHookLogic__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapHookLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookLogic_DEFINED
struct SnapTrapHookLogic__Class;
struct SnapTrapHookLogic {
    struct SnapTrapHookLogic__Class* klass;
    MonitorData* monitor;
    struct SnapTrapHookLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookLogic_FWDDECL
#include <Modloader/app/structs/SnapTrapHookLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapHookLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookLogic_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
