#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiskBlurSRP__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiskBlurSRP__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiskBlurSRP__Fields_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_DiskBlurSRP__Fields_DEFINED
struct Material__Array;
struct Vector4__Array;
struct __declspec(align(8)) DiskBlurSRP__Fields {
    int32_t _sampleCount;
    struct Vector4 motionBlurParams;
    float MotionBlurVignettePower;
    float MotionBlurVignetteSize;
    float MotionBlurVignetteStrength;
    float VectorMotionBlurRadius;
    float VectorMotionBlurScale;
    float MotionBlurFPSScale;
    bool debugShowInterest;
    bool debugShowMotionVectors;
    struct Material__Array* materials;
    struct Material__Array* materialsMB;
    struct Vector4__Array* m_interestZonePos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DiskBlurSRP__Fields_FWDDECL)
#define IL2CPP_STRUCT_DiskBlurSRP__Fields_FWDDECL
#include <Modloader/app/structs/Material__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_DiskBlurSRP__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiskBlurSRP__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DiskBlurSRP__Fields_FWDDECL)
#include <Modloader/app/structs/DiskBlurSRP__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiskBlurSRP__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
