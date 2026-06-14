#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inertia__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inertia__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_Inertia__Fields_DEFINED
struct Inertia_Body__Array;
struct OffsetModifier_OffsetLimits__Array;
struct Inertia__Fields {
    struct OffsetModifier__Fields _;
    struct Inertia_Body__Array* bodies;
    struct OffsetModifier_OffsetLimits__Array* limits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inertia__Fields_FWDDECL)
#define IL2CPP_STRUCT_Inertia__Fields_FWDDECL
#include <Modloader/app/structs/Inertia_Body__Array.h>
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Array.h>
#endif
#undef IL2CPP_STRUCT_Inertia__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Inertia__Fields_FWDDECL)
#include <Modloader/app/structs/Inertia__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inertia__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
