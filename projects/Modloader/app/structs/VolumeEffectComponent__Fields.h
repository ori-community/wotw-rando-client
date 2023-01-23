#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectComponent__Fields_DEFINED
struct String;
struct List_1_AmplifyColor_VolumeEffectField_;
struct __declspec(align(8)) VolumeEffectComponent__Fields {
    struct String* componentName;
    struct List_1_AmplifyColor_VolumeEffectField_* fields;
};
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectComponent__Fields_FWDDECL
#include <Modloader/app/structs/List_1_AmplifyColor_VolumeEffectField_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectComponent__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeEffectComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
