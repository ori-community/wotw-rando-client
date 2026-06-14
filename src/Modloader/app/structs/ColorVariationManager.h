#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariationManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager_DEFINED)
#include <Modloader/app/structs/ColorVariationManager__Fields.h>
#if defined(IL2CPP_STRUCT_ColorVariationManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorVariationManager_DEFINED
struct ColorVariationManager__Class;
struct ColorVariationManager {
    struct ColorVariationManager__Class* klass;
    MonitorData* monitor;
    struct ColorVariationManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariationManager_FWDDECL)
#define IL2CPP_STRUCT_ColorVariationManager_FWDDECL
#include <Modloader/app/structs/ColorVariationManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorVariationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariationManager_FWDDECL)
#include <Modloader/app/structs/ColorVariationManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariationManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
