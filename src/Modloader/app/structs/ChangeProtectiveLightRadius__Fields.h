#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_DEFINED
struct ProtectiveLightRadial;
struct FloatAnimator;
struct ChangeProtectiveLightRadius__Fields {
    struct MonoBehaviour__Fields _;
    struct ProtectiveLightRadial* ProtectiveLightRadial;
    struct FloatAnimator* FloatAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/ProtectiveLightRadial.h>
#endif
#undef IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeProtectiveLightRadius__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeProtectiveLightRadius__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeProtectiveLightRadius__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
