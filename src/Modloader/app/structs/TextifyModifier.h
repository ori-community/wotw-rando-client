#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextifyModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextifyModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextifyModifier_DEFINED)
#include <Modloader/app/structs/TextifyModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextifyModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextifyModifier_DEFINED
struct TextifyModifier__Class;
struct TextifyModifier {
    struct TextifyModifier__Class* klass;
    MonitorData* monitor;
    struct TextifyModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextifyModifier_FWDDECL)
#define IL2CPP_STRUCT_TextifyModifier_FWDDECL
#include <Modloader/app/structs/TextifyModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextifyModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextifyModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextifyModifier_FWDDECL)
#include <Modloader/app/structs/TextifyModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextifyModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
