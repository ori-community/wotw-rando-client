#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackTriggered_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackTriggered_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTriggered_DEFINED)
#define IL2CPP_STRUCT_AttackTriggered_DEFINED
struct AttackTriggered__Class;
struct AttackTriggered {
    struct AttackTriggered__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AttackTriggered_FWDDECL)
#define IL2CPP_STRUCT_AttackTriggered_FWDDECL
#include <Modloader/app/structs/AttackTriggered__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackTriggered_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTriggered_DEFINED) && !defined(IL2CPP_STRUCT_AttackTriggered_FWDDECL)
#include <Modloader/app/structs/AttackTriggered.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackTriggered.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
