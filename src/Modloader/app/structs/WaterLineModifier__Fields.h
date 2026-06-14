#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterLineModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterLineModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterLineModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterLineModifier__Fields_DEFINED
struct UberShaderVector;
struct UberShaderColor;
struct UberWaterControl;
struct WaterLineModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderVector* WaterlineSettings;
    float Offset;
    struct UberShaderColor* WaterlineColor;
    bool DynamicWater;
    struct UberWaterControl* m_water;
    int32_t m_frame;
    struct Vector3 m_prevPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterLineModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterLineModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#include <Modloader/app/structs/UberShaderVector.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_WaterLineModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterLineModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterLineModifier__Fields_FWDDECL)
#include <Modloader/app/structs/WaterLineModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterLineModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
