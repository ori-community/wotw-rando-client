#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectField_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectField_DEFINED)
#include <Modloader/app/structs/VolumeEffectField__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectField__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectField_DEFINED
struct VolumeEffectField__Class;
struct VolumeEffectField {
    struct VolumeEffectField__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectField__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectField_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectField_FWDDECL
#include <Modloader/app/structs/VolumeEffectField__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectField_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectField_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectField_FWDDECL)
#include <Modloader/app/structs/VolumeEffectField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
