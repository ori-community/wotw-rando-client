#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_DoubleVision__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_DoubleVision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_DoubleVision__Fields_DEFINED)
#include <Modloader/app/structs/CC_Base__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CC_Base__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CC_DoubleVision__Fields_DEFINED
struct CC_DoubleVision__Fields {
    struct CC_Base__Fields _;
    struct Vector2 displace;
    float amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_DoubleVision__Fields_FWDDECL)
#define IL2CPP_STRUCT_CC_DoubleVision__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CC_DoubleVision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_DoubleVision__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CC_DoubleVision__Fields_FWDDECL)
#include <Modloader/app/structs/CC_DoubleVision__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_DoubleVision__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
