#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3Manager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3Manager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Manager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Water3Manager_CpuDisplacementModel__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Water3Manager_CpuDisplacementModel__Enum_DEFINED)
#define IL2CPP_STRUCT_Water3Manager__Fields_DEFINED
struct Texture2D;
struct Material;
struct Water3Manager__Fields {
    struct MonoBehaviour__Fields _;
    Water3Manager_CpuDisplacementModel__Enum m_CpuDisplacementModel;

    float m_DisplacementTiling;
    float m_NormalsDisplacement;
    float m_HeightDisplacement;
    float m_SmallWavesSpeed;
    struct Texture2D* m_DisplacementHeightMap;
    struct Texture2D* m_2ndDisplacementHeightMap;
    struct Material* m_SharedWaterMaterial;
    float m_Timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3Manager__Fields_FWDDECL)
#define IL2CPP_STRUCT_Water3Manager__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Water3Manager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Manager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Water3Manager__Fields_FWDDECL)
#include <Modloader/app/structs/Water3Manager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3Manager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
