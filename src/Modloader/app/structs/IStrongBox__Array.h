#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStrongBox__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStrongBox__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStrongBox__Array_DEFINED)
#define IL2CPP_STRUCT_IStrongBox__Array_DEFINED
struct IStrongBox__Array__Class;
struct IStrongBox;
struct IStrongBox__Array {
    struct IStrongBox__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IStrongBox* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IStrongBox__Array_FWDDECL)
#define IL2CPP_STRUCT_IStrongBox__Array_FWDDECL
#include <Modloader/app/structs/IStrongBox.h>
#include <Modloader/app/structs/IStrongBox__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IStrongBox__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStrongBox__Array_DEFINED) && !defined(IL2CPP_STRUCT_IStrongBox__Array_FWDDECL)
#include <Modloader/app/structs/IStrongBox__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStrongBox__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
