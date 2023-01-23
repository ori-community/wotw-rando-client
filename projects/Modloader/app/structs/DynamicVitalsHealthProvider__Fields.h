#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_DEFINED)
#include <Modloader/app/structs/FloatValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_FloatValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_DEFINED
struct MoonReference_1_Vitals_;
struct Vitals;
struct DynamicVitalsHealthProvider__Fields {
    struct FloatValueProvider__Fields _;
    struct MoonReference_1_Vitals_* Vitals;
    struct Vitals* m_vitals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Vitals_.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicVitalsHealthProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicVitalsHealthProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
