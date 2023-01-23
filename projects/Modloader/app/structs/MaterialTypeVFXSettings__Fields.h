#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_DEFINED
struct List_1_MaterialVFXSet_;
struct Dictionary_2_SurfaceMaterialType_MaterialVFXSet_;
struct __declspec(align(8)) MaterialTypeVFXSettings__Fields {
    struct List_1_MaterialVFXSet_* Settings;
    struct Dictionary_2_SurfaceMaterialType_MaterialVFXSet_* SettingsDictionary;
};
#endif
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_MaterialVFXSet_.h>
#include <Modloader/app/structs/List_1_MaterialVFXSet_.h>
#endif
#undef IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialTypeVFXSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialTypeVFXSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
