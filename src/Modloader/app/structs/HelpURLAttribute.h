#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HelpURLAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HelpURLAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelpURLAttribute_DEFINED)
#include <Modloader/app/structs/HelpURLAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_HelpURLAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_HelpURLAttribute_DEFINED
struct HelpURLAttribute__Class;
struct HelpURLAttribute {
    struct HelpURLAttribute__Class* klass;
    MonitorData* monitor;
    struct HelpURLAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HelpURLAttribute_FWDDECL)
#define IL2CPP_STRUCT_HelpURLAttribute_FWDDECL
#include <Modloader/app/structs/HelpURLAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_HelpURLAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelpURLAttribute_DEFINED) && !defined(IL2CPP_STRUCT_HelpURLAttribute_FWDDECL)
#include <Modloader/app/structs/HelpURLAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HelpURLAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
