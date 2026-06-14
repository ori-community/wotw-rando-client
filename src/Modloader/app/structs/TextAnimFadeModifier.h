#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextAnimFadeModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextAnimFadeModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAnimFadeModifier_DEFINED)
#include <Modloader/app/structs/TextAnimFadeModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextAnimFadeModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextAnimFadeModifier_DEFINED
struct TextAnimFadeModifier__Class;
struct TextAnimFadeModifier {
    struct TextAnimFadeModifier__Class* klass;
    MonitorData* monitor;
    struct TextAnimFadeModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextAnimFadeModifier_FWDDECL)
#define IL2CPP_STRUCT_TextAnimFadeModifier_FWDDECL
#include <Modloader/app/structs/TextAnimFadeModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextAnimFadeModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAnimFadeModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextAnimFadeModifier_FWDDECL)
#include <Modloader/app/structs/TextAnimFadeModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextAnimFadeModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
