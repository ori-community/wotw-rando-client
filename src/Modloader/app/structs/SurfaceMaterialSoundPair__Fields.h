#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_DEFINED)
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_DEFINED
struct Switch_1;
struct __declspec(align(8)) SurfaceMaterialSoundPair__Fields {
    struct Switch_1* Switch;
    SurfaceMaterialType__Enum SurfaceMaterialType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_FWDDECL
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceMaterialSoundPair__Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceMaterialSoundPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceMaterialSoundPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
