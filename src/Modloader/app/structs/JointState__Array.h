#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointState__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointState__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState__Array_DEFINED)
#define IL2CPP_STRUCT_JointState__Array_DEFINED
struct JointState__Array__Class;
struct JointState;
struct JointState__Array {
    struct JointState__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct JointState* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_JointState__Array_FWDDECL)
#define IL2CPP_STRUCT_JointState__Array_FWDDECL
#include <Modloader/app/structs/JointState.h>
#include <Modloader/app/structs/JointState__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_JointState__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState__Array_DEFINED) && !defined(IL2CPP_STRUCT_JointState__Array_FWDDECL)
#include <Modloader/app/structs/JointState__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointState__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
