#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition_DEFINED)
#include <Modloader/app/structs/MoonAnimatorDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorDefinition_DEFINED
struct MoonAnimatorDefinition__Class;
struct MoonAnimatorDefinition {
    struct MoonAnimatorDefinition__Class* klass;
    MonitorData* monitor;
    struct MoonAnimatorDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorDefinition_FWDDECL
#include <Modloader/app/structs/MoonAnimatorDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorDefinition_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
