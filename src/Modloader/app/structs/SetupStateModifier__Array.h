#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifier__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Array_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifier__Array_DEFINED
struct SetupStateModifier__Array__Class;
struct SetupStateModifier;
struct SetupStateModifier__Array {
    struct SetupStateModifier__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SetupStateModifier* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Array_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifier__Array_FWDDECL
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SetupStateModifier__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupStateModifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Array_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifier__Array_FWDDECL)
#include <Modloader/app/structs/SetupStateModifier__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifier__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
