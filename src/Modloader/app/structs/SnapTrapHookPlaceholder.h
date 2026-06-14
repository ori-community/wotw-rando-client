#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder_DEFINED)
#include <Modloader/app/structs/SnapTrapHookPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder_DEFINED
struct SnapTrapHookPlaceholder__Class;
struct SnapTrapHookPlaceholder {
    struct SnapTrapHookPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SnapTrapHookPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder_FWDDECL
#include <Modloader/app/structs/SnapTrapHookPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapHookPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
