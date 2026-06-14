#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_DEFINED)
#include <Modloader/app/structs/VerletBodyIndexed_Link.h>
#if defined(IL2CPP_STRUCT_VerletBodyIndexed_Link_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_DEFINED
struct VerletBodyIndexed_Link__Array__Class;
struct VerletBodyIndexed_Link__Array {
    struct VerletBodyIndexed_Link__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct VerletBodyIndexed_Link vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_FWDDECL
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link__Array_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
