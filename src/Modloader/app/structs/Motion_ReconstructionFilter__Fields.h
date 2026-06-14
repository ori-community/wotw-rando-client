#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_DEFINED)
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#if defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_DEFINED
struct Material;
struct __declspec(align(8)) Motion_ReconstructionFilter__Fields {
    struct Material* _material;
    RenderTextureFormat__Enum _vectorRTFormat;

    RenderTextureFormat__Enum _packedRTFormat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Motion_ReconstructionFilter__Fields_FWDDECL)
#include <Modloader/app/structs/Motion_ReconstructionFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Motion_ReconstructionFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
