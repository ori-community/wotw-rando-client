#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IModularZoneModifier__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IModularZoneModifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IModularZoneModifier__Array_DEFINED)
#define IL2CPP_STRUCT_IModularZoneModifier__Array_DEFINED
struct IModularZoneModifier__Array__Class;
struct IModularZoneModifier;
struct IModularZoneModifier__Array {
    struct IModularZoneModifier__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IModularZoneModifier* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IModularZoneModifier__Array_FWDDECL)
#define IL2CPP_STRUCT_IModularZoneModifier__Array_FWDDECL
#include <Modloader/app/structs/IModularZoneModifier.h>
#include <Modloader/app/structs/IModularZoneModifier__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IModularZoneModifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IModularZoneModifier__Array_DEFINED) && !defined(IL2CPP_STRUCT_IModularZoneModifier__Array_FWDDECL)
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
