#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtectiveLightCone__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtectiveLightCone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone__Array_DEFINED)
#define IL2CPP_STRUCT_ProtectiveLightCone__Array_DEFINED
struct ProtectiveLightCone__Array__Class;
struct ProtectiveLightCone;
struct ProtectiveLightCone__Array {
    struct ProtectiveLightCone__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ProtectiveLightCone* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone__Array_FWDDECL)
#define IL2CPP_STRUCT_ProtectiveLightCone__Array_FWDDECL
#include <Modloader/app/structs/ProtectiveLightCone.h>
#include <Modloader/app/structs/ProtectiveLightCone__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ProtectiveLightCone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone__Array_DEFINED) && !defined(IL2CPP_STRUCT_ProtectiveLightCone__Array_FWDDECL)
#include <Modloader/app/structs/ProtectiveLightCone__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtectiveLightCone__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
