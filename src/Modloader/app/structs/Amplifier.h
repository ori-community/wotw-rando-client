#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Amplifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Amplifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_DEFINED)
#include <Modloader/app/structs/Amplifier__Fields.h>
#if defined(IL2CPP_STRUCT_Amplifier__Fields_DEFINED)
#define IL2CPP_STRUCT_Amplifier_DEFINED
struct Amplifier__Class;
struct Amplifier {
    struct Amplifier__Class* klass;
    MonitorData* monitor;
    struct Amplifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Amplifier_FWDDECL)
#define IL2CPP_STRUCT_Amplifier_FWDDECL
#include <Modloader/app/structs/Amplifier__Class.h>
#endif
#undef IL2CPP_STRUCT_Amplifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_DEFINED) && !defined(IL2CPP_STRUCT_Amplifier_FWDDECL)
#include <Modloader/app/structs/Amplifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Amplifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
