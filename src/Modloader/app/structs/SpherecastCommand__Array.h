#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpherecastCommand__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpherecastCommand__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpherecastCommand__Array_DEFINED)
#include <Modloader/app/structs/SpherecastCommand.h>
#if defined(IL2CPP_STRUCT_SpherecastCommand_DEFINED)
#define IL2CPP_STRUCT_SpherecastCommand__Array_DEFINED
struct SpherecastCommand__Array__Class;
struct SpherecastCommand__Array {
    struct SpherecastCommand__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SpherecastCommand vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpherecastCommand__Array_FWDDECL)
#define IL2CPP_STRUCT_SpherecastCommand__Array_FWDDECL
#include <Modloader/app/structs/SpherecastCommand__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SpherecastCommand__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpherecastCommand__Array_DEFINED) && !defined(IL2CPP_STRUCT_SpherecastCommand__Array_FWDDECL)
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
