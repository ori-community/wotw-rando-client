#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PowerFuse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PowerFuse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse__Fields_DEFINED)
#include <Modloader/app/structs/DamageReceiver__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED)
#define IL2CPP_STRUCT_PowerFuse__Fields_DEFINED
struct Action;
struct PowerFuse__Fields {
    struct DamageReceiver__Fields _;
    bool m_isAlive;
    struct Action* m_onDestroyed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PowerFuse__Fields_FWDDECL)
#define IL2CPP_STRUCT_PowerFuse__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_PowerFuse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PowerFuse__Fields_FWDDECL)
#include <Modloader/app/structs/PowerFuse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PowerFuse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
