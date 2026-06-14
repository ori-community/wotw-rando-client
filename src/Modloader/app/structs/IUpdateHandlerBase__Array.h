#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateHandlerBase__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateHandlerBase__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase__Array_DEFINED)
#define IL2CPP_STRUCT_IUpdateHandlerBase__Array_DEFINED
struct IUpdateHandlerBase__Array__Class;
struct IUpdateHandlerBase;
struct IUpdateHandlerBase__Array {
    struct IUpdateHandlerBase__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IUpdateHandlerBase* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase__Array_FWDDECL)
#define IL2CPP_STRUCT_IUpdateHandlerBase__Array_FWDDECL
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateHandlerBase__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateHandlerBase__Array_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateHandlerBase__Array_FWDDECL)
#include <Modloader/app/structs/IUpdateHandlerBase__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateHandlerBase__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
