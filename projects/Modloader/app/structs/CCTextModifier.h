#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextModifier_DEFINED)
#include <Modloader/app/structs/CCTextModifier__Fields.h>
#if defined(IL2CPP_STRUCT_CCTextModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_CCTextModifier_DEFINED
struct CCTextModifier__Class;
struct CCTextModifier {
    struct CCTextModifier__Class* klass;
    MonitorData* monitor;
    struct CCTextModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextModifier_FWDDECL)
#define IL2CPP_STRUCT_CCTextModifier_FWDDECL
#include <Modloader/app/structs/CCTextModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_CCTextModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextModifier_DEFINED) && !defined(IL2CPP_STRUCT_CCTextModifier_FWDDECL)
#include <Modloader/app/structs/CCTextModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
