#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHoldable__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHoldable__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable__Array_DEFINED)
#define IL2CPP_STRUCT_IHoldable__Array_DEFINED
struct IHoldable__Array__Class;
struct IHoldable;
struct IHoldable__Array {
    struct IHoldable__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IHoldable* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IHoldable__Array_FWDDECL)
#define IL2CPP_STRUCT_IHoldable__Array_FWDDECL
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/IHoldable__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IHoldable__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable__Array_DEFINED) && !defined(IL2CPP_STRUCT_IHoldable__Array_FWDDECL)
#include <Modloader/app/structs/IHoldable__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHoldable__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
