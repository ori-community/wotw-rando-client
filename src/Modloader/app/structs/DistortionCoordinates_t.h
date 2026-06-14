#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortionCoordinates_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortionCoordinates_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionCoordinates_t_DEFINED)
#define IL2CPP_STRUCT_DistortionCoordinates_t_DEFINED
struct DistortionCoordinates_t {
    float rfRed0;
    float rfRed1;
    float rfGreen0;
    float rfGreen1;
    float rfBlue0;
    float rfBlue1;
};
#endif
#if !defined(IL2CPP_STRUCT_DistortionCoordinates_t_FWDDECL)
#define IL2CPP_STRUCT_DistortionCoordinates_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_DistortionCoordinates_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionCoordinates_t_DEFINED) && !defined(IL2CPP_STRUCT_DistortionCoordinates_t_FWDDECL)
#include <Modloader/app/structs/DistortionCoordinates_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortionCoordinates_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
