#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerContext__Fields_DEFINED
struct Collider;
struct __declspec(align(8)) TriggerContext__Fields {
    struct Collider* _Collider_k__BackingField;
    struct Collider* _TriggerReciever_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TriggerContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriggerContext__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#endif
#undef IL2CPP_STRUCT_TriggerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriggerContext__Fields_FWDDECL)
#include <Modloader/app/structs/TriggerContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
