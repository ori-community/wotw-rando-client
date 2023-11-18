#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamItemInstanceID_t__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamItemInstanceID_t__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamItemInstanceID_t__Array_DEFINED)
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#if defined(IL2CPP_STRUCT_SteamItemInstanceID_t_DEFINED)
#define IL2CPP_STRUCT_SteamItemInstanceID_t__Array_DEFINED
struct SteamItemInstanceID_t__Array__Class;
struct SteamItemInstanceID_t__Array {
    struct SteamItemInstanceID_t__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SteamItemInstanceID_t vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamItemInstanceID_t__Array_FWDDECL)
#define IL2CPP_STRUCT_SteamItemInstanceID_t__Array_FWDDECL
#include <Modloader/app/structs/SteamItemInstanceID_t__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamItemInstanceID_t__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamItemInstanceID_t__Array_DEFINED) && !defined(IL2CPP_STRUCT_SteamItemInstanceID_t__Array_FWDDECL)
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
