#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodeIdentifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodeIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeIdentifier_DEFINED)
#define IL2CPP_STRUCT_CodeIdentifier_DEFINED
struct CodeIdentifier__Class;
struct CodeIdentifier {
    struct CodeIdentifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CodeIdentifier_FWDDECL)
#define IL2CPP_STRUCT_CodeIdentifier_FWDDECL
#include <Modloader/app/structs/CodeIdentifier__Class.h>
#endif
#undef IL2CPP_STRUCT_CodeIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeIdentifier_DEFINED) && !defined(IL2CPP_STRUCT_CodeIdentifier_FWDDECL)
#include <Modloader/app/structs/CodeIdentifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodeIdentifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
