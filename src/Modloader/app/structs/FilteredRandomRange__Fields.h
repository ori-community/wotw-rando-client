#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilteredRandomRange__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilteredRandomRange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilteredRandomRange__Fields_DEFINED)
#define IL2CPP_STRUCT_FilteredRandomRange__Fields_DEFINED
struct IRng;
struct UInt32__Array;
struct __declspec(align(8)) FilteredRandomRange__Fields {
    uint32_t m_min;
    uint32_t m_max;
    uint32_t m_repeatingRunLength;
    struct IRng* m_rng;
    struct UInt32__Array* m_history;
};
#endif
#if !defined(IL2CPP_STRUCT_FilteredRandomRange__Fields_FWDDECL)
#define IL2CPP_STRUCT_FilteredRandomRange__Fields_FWDDECL
#include <Modloader/app/structs/IRng.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_FilteredRandomRange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilteredRandomRange__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FilteredRandomRange__Fields_FWDDECL)
#include <Modloader/app/structs/FilteredRandomRange__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilteredRandomRange__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
