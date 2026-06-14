#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoFiPalette__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoFiPalette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoFiPalette__Fields_DEFINED)
#include <Modloader/app/structs/LoFiPalette_Preset__Enum.h>
#include <Modloader/app/structs/LookupFilter3D__Fields.h>
#if defined(IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED) && defined(IL2CPP_STRUCT_LoFiPalette_Preset__Enum_DEFINED)
#define IL2CPP_STRUCT_LoFiPalette__Fields_DEFINED
struct LoFiPalette__Fields {
    struct LookupFilter3D__Fields _;
    LoFiPalette_Preset__Enum Palette;

    bool Pixelize;
    float PixelSize;
    LoFiPalette_Preset__Enum m_CurrentPreset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoFiPalette__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoFiPalette__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LoFiPalette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoFiPalette__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoFiPalette__Fields_FWDDECL)
#include <Modloader/app/structs/LoFiPalette__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoFiPalette__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
