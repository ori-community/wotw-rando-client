#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRole__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRole__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole__Array_DEFINED)
#define IL2CPP_STRUCT_GroupRole__Array_DEFINED
struct GroupRole__Array__Class;
struct GroupRole;
struct GroupRole__Array {
    struct GroupRole__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GroupRole* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GroupRole__Array_FWDDECL)
#define IL2CPP_STRUCT_GroupRole__Array_FWDDECL
#include <Modloader/app/structs/GroupRole.h>
#include <Modloader/app/structs/GroupRole__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRole__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole__Array_DEFINED) && !defined(IL2CPP_STRUCT_GroupRole__Array_FWDDECL)
#include <Modloader/app/structs/GroupRole__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRole__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
