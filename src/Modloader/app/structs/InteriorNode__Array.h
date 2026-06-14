#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteriorNode__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteriorNode__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode__Array_DEFINED)
#define IL2CPP_STRUCT_InteriorNode__Array_DEFINED
struct InteriorNode__Array__Class;
struct InteriorNode;
struct InteriorNode__Array {
    struct InteriorNode__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct InteriorNode* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_InteriorNode__Array_FWDDECL)
#define IL2CPP_STRUCT_InteriorNode__Array_FWDDECL
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/InteriorNode__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_InteriorNode__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode__Array_DEFINED) && !defined(IL2CPP_STRUCT_InteriorNode__Array_FWDDECL)
#include <Modloader/app/structs/InteriorNode__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteriorNode__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
