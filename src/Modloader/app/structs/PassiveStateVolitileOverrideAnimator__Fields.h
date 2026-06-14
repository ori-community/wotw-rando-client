#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_DEFINED
struct MoonReference_1_IPassiveStateDescriptor_;
struct IPassiveStateDescriptor;
struct PassiveStateVolitileOverrideAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_IPassiveStateDescriptor_* PassiveStateDescriptor;
    int32_t Value;
    struct IPassiveStateDescriptor* m_resolvedDescriptor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_FWDDECL
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#include <Modloader/app/structs/MoonReference_1_IPassiveStateDescriptor_.h>
#endif
#undef IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PassiveStateVolitileOverrideAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PassiveStateVolitileOverrideAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PassiveStateVolitileOverrideAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
