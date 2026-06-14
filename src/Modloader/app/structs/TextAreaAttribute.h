#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextAreaAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextAreaAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAreaAttribute_DEFINED)
#include <Modloader/app/structs/TextAreaAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TextAreaAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TextAreaAttribute_DEFINED
struct TextAreaAttribute__Class;
struct TextAreaAttribute {
    struct TextAreaAttribute__Class* klass;
    MonitorData* monitor;
    struct TextAreaAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextAreaAttribute_FWDDECL)
#define IL2CPP_STRUCT_TextAreaAttribute_FWDDECL
#include <Modloader/app/structs/TextAreaAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TextAreaAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAreaAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TextAreaAttribute_FWDDECL)
#include <Modloader/app/structs/TextAreaAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextAreaAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
