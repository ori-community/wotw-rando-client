#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Amplifier_Body__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Amplifier_Body__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Array_DEFINED)
#define IL2CPP_STRUCT_Amplifier_Body__Array_DEFINED
struct Amplifier_Body__Array__Class;
struct Amplifier_Body;
struct Amplifier_Body__Array {
    struct Amplifier_Body__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Amplifier_Body* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Array_FWDDECL)
#define IL2CPP_STRUCT_Amplifier_Body__Array_FWDDECL
#include <Modloader/app/structs/Amplifier_Body.h>
#include <Modloader/app/structs/Amplifier_Body__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Amplifier_Body__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Array_DEFINED) && !defined(IL2CPP_STRUCT_Amplifier_Body__Array_FWDDECL)
#include <Modloader/app/structs/Amplifier_Body__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Amplifier_Body__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
