#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct __declspec(align(8)) BreakablePhysicalSetupData__Fields {
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* m_transition;
    float m_desiredValue;
};
#endif
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_FWDDECL)
#include <Modloader/app/structs/BreakablePhysicalSetupData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakablePhysicalSetupData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
