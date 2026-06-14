#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleVision__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleVision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleVision__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DoubleVision__Fields_DEFINED
struct DoubleVision__Fields {
    struct BaseEffect__Fields _;
    struct Vector2 Displace;
    float Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleVision__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoubleVision__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DoubleVision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleVision__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoubleVision__Fields_FWDDECL)
#include <Modloader/app/structs/DoubleVision__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleVision__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
