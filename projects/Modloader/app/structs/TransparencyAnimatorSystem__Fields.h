#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_DEFINED
struct Stopwatch;
struct TransparencyAnimatorSystemStrategy;
struct TransparencyAnimatorSystem__Fields {
    struct MonoBehaviour__Fields _;
    int32_t QuantizationAnchor;
    struct Stopwatch* m_timesliceWatch;
    struct TransparencyAnimatorSystemStrategy* m_strategy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_FWDDECL
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy.h>
#endif
#undef IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__Fields_FWDDECL)
#include <Modloader/app/structs/TransparencyAnimatorSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyAnimatorSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
