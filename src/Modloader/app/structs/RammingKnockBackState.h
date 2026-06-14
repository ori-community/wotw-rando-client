#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingKnockBackState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingKnockBackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingKnockBackState_DEFINED)
#include <Modloader/app/structs/RammingKnockBackState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingKnockBackState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingKnockBackState_DEFINED
struct RammingKnockBackState__Class;
struct RammingKnockBackState {
    struct RammingKnockBackState__Class* klass;
    MonitorData* monitor;
    struct RammingKnockBackState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingKnockBackState_FWDDECL)
#define IL2CPP_STRUCT_RammingKnockBackState_FWDDECL
#include <Modloader/app/structs/RammingKnockBackState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingKnockBackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingKnockBackState_DEFINED) && !defined(IL2CPP_STRUCT_RammingKnockBackState_FWDDECL)
#include <Modloader/app/structs/RammingKnockBackState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingKnockBackState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
