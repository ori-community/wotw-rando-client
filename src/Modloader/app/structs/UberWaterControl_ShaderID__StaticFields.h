#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_DEFINED
struct Int32__Array;
struct UberWaterControl_ShaderID__StaticFields {
    int32_t _PxSizeX;
    int32_t _PxSizeY;
    int32_t _PxSizes;
    int32_t _DispTex;
    int32_t _Height;
    int32_t _WavePower;
    int32_t _DispUv;
    int32_t _MaxWaveHeight;
    int32_t _WaterPlaneCoords;
    int32_t _WaveScale4;
    int32_t _WaveOffset;
    int32_t deltTime;
    int32_t damping;
    int32_t elasticity;
    int32_t waveSpeed;
    int32_t _NoiseTex;
    int32_t _NoiseStrength;
    int32_t _NoiseOffset;
    int32_t _NoiseScale4;
    int32_t _TransformScale;
    int32_t tessDamping;
    int32_t tessElasticity;
    int32_t tessWaveSpeed;
    int32_t _WaterDispTex;
    int32_t _WaterTransform;
    int32_t WATER_SIM_DISPLACEMENT;
    int32_t WATER_SIM_FAKE;
    struct Int32__Array* impactBuf;
    struct Int32__Array* impactBufTess;
};
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl_ShaderID__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberWaterControl_ShaderID__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl_ShaderID__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
