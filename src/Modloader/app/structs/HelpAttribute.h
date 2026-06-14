#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HelpAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HelpAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelpAttribute_DEFINED)
#include <Modloader/app/structs/HelpAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_HelpAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_HelpAttribute_DEFINED
struct HelpAttribute__Class;
struct HelpAttribute {
    struct HelpAttribute__Class* klass;
    MonitorData* monitor;
    struct HelpAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HelpAttribute_FWDDECL)
#define IL2CPP_STRUCT_HelpAttribute_FWDDECL
#include <Modloader/app/structs/HelpAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_HelpAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelpAttribute_DEFINED) && !defined(IL2CPP_STRUCT_HelpAttribute_FWDDECL)
#include <Modloader/app/structs/HelpAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HelpAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
