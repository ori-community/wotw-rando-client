#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetData__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetData__Fields_DEFINED
struct UberPresetAsset;
struct Object_1;
struct __declspec(align(8)) UberPresetData__Fields {
    struct UberPresetAsset* Preset;
    struct Object_1* m_preset;
    int32_t m_version;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPresetData__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPresetData__Fields_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/UberPresetAsset.h>
#endif
#undef IL2CPP_STRUCT_UberPresetData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetData__Fields_FWDDECL)
#include <Modloader/app/structs/UberPresetData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
