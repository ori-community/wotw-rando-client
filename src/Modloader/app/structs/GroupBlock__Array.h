#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupBlock__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupBlock__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock__Array_DEFINED)
#define IL2CPP_STRUCT_GroupBlock__Array_DEFINED
struct GroupBlock__Array__Class;
struct GroupBlock;
struct GroupBlock__Array {
    struct GroupBlock__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GroupBlock* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GroupBlock__Array_FWDDECL)
#define IL2CPP_STRUCT_GroupBlock__Array_FWDDECL
#include <Modloader/app/structs/GroupBlock.h>
#include <Modloader/app/structs/GroupBlock__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupBlock__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock__Array_DEFINED) && !defined(IL2CPP_STRUCT_GroupBlock__Array_FWDDECL)
#include <Modloader/app/structs/GroupBlock__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupBlock__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
