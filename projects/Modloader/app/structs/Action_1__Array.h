#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Action_1__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Action_1__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Action_1__Array_DEFINED)
#define IL2CPP_STRUCT_Action_1__Array_DEFINED
struct Action_1__Array__Class;
struct Action_1;
struct Action_1__Array {
    struct Action_1__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Action_1* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Action_1__Array_FWDDECL)
#define IL2CPP_STRUCT_Action_1__Array_FWDDECL
#include <Modloader/app/structs/Action_1.h>
#include <Modloader/app/structs/Action_1__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Action_1__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Action_1__Array_DEFINED) && !defined(IL2CPP_STRUCT_Action_1__Array_FWDDECL)
#include <Modloader/app/structs/Action_1__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Action_1__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
