#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariation_DEFINED)
#include <Modloader/app/structs/ColorVariation__Fields.h>
#if defined(IL2CPP_STRUCT_ColorVariation__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorVariation_DEFINED
struct ColorVariation__Class;
struct ColorVariation {
    struct ColorVariation__Class* klass;
    MonitorData* monitor;
    struct ColorVariation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariation_FWDDECL)
#define IL2CPP_STRUCT_ColorVariation_FWDDECL
#include <Modloader/app/structs/ColorVariation__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorVariation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariation_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariation_FWDDECL)
#include <Modloader/app/structs/ColorVariation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
