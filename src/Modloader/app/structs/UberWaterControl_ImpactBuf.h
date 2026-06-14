#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl_ImpactBuf_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl_ImpactBuf_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_ImpactBuf_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl_ImpactBuf_DEFINED
struct UberWaterControl_ImpactBuf {
    float Power;
    float Radius;
    struct Vector2 Uv;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl_ImpactBuf_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl_ImpactBuf_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberWaterControl_ImpactBuf_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_ImpactBuf_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl_ImpactBuf_FWDDECL)
#include <Modloader/app/structs/UberWaterControl_ImpactBuf.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl_ImpactBuf.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
