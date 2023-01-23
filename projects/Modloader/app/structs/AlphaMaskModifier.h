#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlphaMaskModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlphaMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphaMaskModifier_DEFINED)
#include <Modloader/app/structs/AlphaMaskModifier__Fields.h>
#if defined(IL2CPP_STRUCT_AlphaMaskModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_AlphaMaskModifier_DEFINED
struct AlphaMaskModifier__Class;
struct AlphaMaskModifier {
    struct AlphaMaskModifier__Class* klass;
    MonitorData* monitor;
    struct AlphaMaskModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlphaMaskModifier_FWDDECL)
#define IL2CPP_STRUCT_AlphaMaskModifier_FWDDECL
#include <Modloader/app/structs/AlphaMaskModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_AlphaMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphaMaskModifier_DEFINED) && !defined(IL2CPP_STRUCT_AlphaMaskModifier_FWDDECL)
#include <Modloader/app/structs/AlphaMaskModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlphaMaskModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
