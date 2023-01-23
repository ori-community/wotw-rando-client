#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffect__Fields_DEFINED
struct AmplifyColorBase;
struct List_1_AmplifyColor_VolumeEffectComponent_;
struct __declspec(align(8)) VolumeEffect__Fields {
    struct AmplifyColorBase* gameObject;
    struct List_1_AmplifyColor_VolumeEffectComponent_* components;
};
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffect__Fields_FWDDECL
#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/List_1_AmplifyColor_VolumeEffectComponent_.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffect__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
