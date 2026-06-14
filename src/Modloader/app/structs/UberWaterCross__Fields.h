#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterCross__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterCross__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterCross__Fields_DEFINED)
#include <Modloader/app/structs/UberWaterComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterCross__Fields_DEFINED
struct Renderer;
struct UberWaterCross__Fields {
    struct UberWaterComponent__Fields _;
    struct Renderer* m_renderer;
    float DistortSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterCross__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterCross__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_UberWaterCross__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterCross__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterCross__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterCross__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterCross__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
