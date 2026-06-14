#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutlineModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutlineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutlineModifier_DEFINED)
#include <Modloader/app/structs/OutlineModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OutlineModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_OutlineModifier_DEFINED
struct OutlineModifier__Class;
struct OutlineModifier {
    struct OutlineModifier__Class* klass;
    MonitorData* monitor;
    struct OutlineModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OutlineModifier_FWDDECL)
#define IL2CPP_STRUCT_OutlineModifier_FWDDECL
#include <Modloader/app/structs/OutlineModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_OutlineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutlineModifier_DEFINED) && !defined(IL2CPP_STRUCT_OutlineModifier_FWDDECL)
#include <Modloader/app/structs/OutlineModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutlineModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
