#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialVFXSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialVFXSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSet__Fields_DEFINED)
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_MaterialVFXSet__Fields_DEFINED
struct List_1_MaterialVFXSizePair_;
struct __declspec(align(8)) MaterialVFXSet__Fields {
    SurfaceMaterialType__Enum Material;

    struct List_1_MaterialVFXSizePair_* Settings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialVFXSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialVFXSet__Fields_FWDDECL
#include <Modloader/app/structs/List_1_MaterialVFXSizePair_.h>
#endif
#undef IL2CPP_STRUCT_MaterialVFXSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialVFXSet__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialVFXSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialVFXSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
