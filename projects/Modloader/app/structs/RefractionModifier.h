#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefractionModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefractionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefractionModifier_DEFINED)
#include <Modloader/app/structs/RefractionModifier__Fields.h>
#if defined(IL2CPP_STRUCT_RefractionModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_RefractionModifier_DEFINED
struct RefractionModifier__Class;
struct RefractionModifier {
    struct RefractionModifier__Class* klass;
    MonitorData* monitor;
    struct RefractionModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefractionModifier_FWDDECL)
#define IL2CPP_STRUCT_RefractionModifier_FWDDECL
#include <Modloader/app/structs/RefractionModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_RefractionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefractionModifier_DEFINED) && !defined(IL2CPP_STRUCT_RefractionModifier_FWDDECL)
#include <Modloader/app/structs/RefractionModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefractionModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
