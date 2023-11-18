#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SplayNode__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Array_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Array_DEFINED
struct SweepLine_SplayNode__Array__Class;
struct SweepLine_SplayNode;
struct SweepLine_SplayNode__Array {
    struct SweepLine_SplayNode__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SweepLine_SplayNode* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Array_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Array_FWDDECL
#include <Modloader/app/structs/SweepLine_SplayNode.h>
#include <Modloader/app/structs/SweepLine_SplayNode__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SplayNode__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Array_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Array_FWDDECL)
#include <Modloader/app/structs/SweepLine_SplayNode__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SplayNode__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
