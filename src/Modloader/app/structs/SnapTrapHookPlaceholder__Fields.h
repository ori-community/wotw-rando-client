#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/PrefabPlaceholder__Fields.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#if defined(IL2CPP_STRUCT_PrefabPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_DEFINED
struct SnapTrapHookPlaceholder__Fields {
    struct PrefabPlaceholder__Fields _;
    struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
