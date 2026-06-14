#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextOutlineModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextOutlineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextOutlineModifier_DEFINED)
#include <Modloader/app/structs/TextOutlineModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextOutlineModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextOutlineModifier_DEFINED
struct TextOutlineModifier__Class;
struct TextOutlineModifier {
    struct TextOutlineModifier__Class* klass;
    MonitorData* monitor;
    struct TextOutlineModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextOutlineModifier_FWDDECL)
#define IL2CPP_STRUCT_TextOutlineModifier_FWDDECL
#include <Modloader/app/structs/TextOutlineModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextOutlineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextOutlineModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextOutlineModifier_FWDDECL)
#include <Modloader/app/structs/TextOutlineModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextOutlineModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
