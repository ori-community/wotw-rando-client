#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatLUT_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatLUT_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatLUT_DEFINED)
#define IL2CPP_STRUCT_FloatLUT_DEFINED
struct Single__Array;
struct FloatLUT {
    int32_t sampleCount;
    float sampleStep;
    struct Single__Array* samples;
    float timeMin;
    float timeRatio;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatLUT_FWDDECL)
#define IL2CPP_STRUCT_FloatLUT_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_FloatLUT_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatLUT_DEFINED) && !defined(IL2CPP_STRUCT_FloatLUT_FWDDECL)
#include <Modloader/app/structs/FloatLUT.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatLUT.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
