#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Amplifier_Body_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Amplifier_Body_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body_DEFINED)
#include <Modloader/app/structs/Amplifier_Body__Fields.h>
#if defined(IL2CPP_STRUCT_Amplifier_Body__Fields_DEFINED)
#define IL2CPP_STRUCT_Amplifier_Body_DEFINED
struct Amplifier_Body__Class;
struct Amplifier_Body {
    struct Amplifier_Body__Class* klass;
    MonitorData* monitor;
    struct Amplifier_Body__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Amplifier_Body_FWDDECL)
#define IL2CPP_STRUCT_Amplifier_Body_FWDDECL
#include <Modloader/app/structs/Amplifier_Body__Class.h>
#endif
#undef IL2CPP_STRUCT_Amplifier_Body_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body_DEFINED) && !defined(IL2CPP_STRUCT_Amplifier_Body_FWDDECL)
#include <Modloader/app/structs/Amplifier_Body.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Amplifier_Body.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
