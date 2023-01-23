#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthController__Fields_DEFINED)
#include <Modloader/app/structs/ValueWithMaxValue__Fields.h>
#if defined(IL2CPP_STRUCT_ValueWithMaxValue__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthController__Fields_DEFINED
struct Action;
struct HealthController__Fields {
    struct ValueWithMaxValue__Fields _;
    struct Action* OnHealthDepletedEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthController__Fields_FWDDECL)
#define IL2CPP_STRUCT_HealthController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_HealthController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HealthController__Fields_FWDDECL)
#include <Modloader/app/structs/HealthController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
