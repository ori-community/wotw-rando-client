#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_DEFINED
struct BlockDamageInterruption__Array;
struct List_1_DamageWeight_;
struct Boolean__Array;
struct __declspec(align(8)) BlockDamageInterruptionHandler__Fields {
    bool m_isCached;
    struct BlockDamageInterruption__Array* m_eventWindows;
    struct List_1_DamageWeight_* m_weightsInMask;
    struct Boolean__Array* m_canBeInterruptedBy;
};
#endif
#if !defined(IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruption__Array.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/List_1_DamageWeight_.h>
#endif
#undef IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlockDamageInterruptionHandler__Fields_FWDDECL)
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
