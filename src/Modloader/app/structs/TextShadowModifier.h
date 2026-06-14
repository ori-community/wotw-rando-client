#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextShadowModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextShadowModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextShadowModifier_DEFINED)
#include <Modloader/app/structs/TextShadowModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextShadowModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextShadowModifier_DEFINED
struct TextShadowModifier__Class;
struct TextShadowModifier {
    struct TextShadowModifier__Class* klass;
    MonitorData* monitor;
    struct TextShadowModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextShadowModifier_FWDDECL)
#define IL2CPP_STRUCT_TextShadowModifier_FWDDECL
#include <Modloader/app/structs/TextShadowModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextShadowModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextShadowModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextShadowModifier_FWDDECL)
#include <Modloader/app/structs/TextShadowModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextShadowModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
