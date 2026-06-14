#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetEffector__Fields_DEFINED
struct OffsetEffector_EffectorLink__Array;
struct OffsetEffector__Fields {
    struct OffsetModifier__Fields _;
    struct OffsetEffector_EffectorLink__Array* effectorLinks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_OffsetEffector__Fields_FWDDECL
#include <Modloader/app/structs/OffsetEffector_EffectorLink__Array.h>
#endif
#undef IL2CPP_STRUCT_OffsetEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OffsetEffector__Fields_FWDDECL)
#include <Modloader/app/structs/OffsetEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
