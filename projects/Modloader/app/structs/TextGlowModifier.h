#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextGlowModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextGlowModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGlowModifier_DEFINED)
#include <Modloader/app/structs/TextGlowModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextGlowModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextGlowModifier_DEFINED
struct TextGlowModifier__Class;
struct TextGlowModifier {
    struct TextGlowModifier__Class* klass;
    MonitorData* monitor;
    struct TextGlowModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextGlowModifier_FWDDECL)
#define IL2CPP_STRUCT_TextGlowModifier_FWDDECL
#include <Modloader/app/structs/TextGlowModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextGlowModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGlowModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextGlowModifier_FWDDECL)
#include <Modloader/app/structs/TextGlowModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextGlowModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
