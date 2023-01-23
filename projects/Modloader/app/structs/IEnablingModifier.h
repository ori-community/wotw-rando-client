#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEnablingModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEnablingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnablingModifier_DEFINED)
#define IL2CPP_STRUCT_IEnablingModifier_DEFINED
struct IEnablingModifier__Class;
struct IEnablingModifier {
    struct IEnablingModifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEnablingModifier_FWDDECL)
#define IL2CPP_STRUCT_IEnablingModifier_FWDDECL
#include <Modloader/app/structs/IEnablingModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IEnablingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnablingModifier_DEFINED) && !defined(IL2CPP_STRUCT_IEnablingModifier_FWDDECL)
#include <Modloader/app/structs/IEnablingModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEnablingModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
