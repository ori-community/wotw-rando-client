#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGenericUberState__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGenericUberState__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericUberState__Array_DEFINED)
#define IL2CPP_STRUCT_IGenericUberState__Array_DEFINED
struct IGenericUberState__Array__Class;
struct IGenericUberState;
struct IGenericUberState__Array {
    struct IGenericUberState__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IGenericUberState* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IGenericUberState__Array_FWDDECL)
#define IL2CPP_STRUCT_IGenericUberState__Array_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IGenericUberState__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IGenericUberState__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericUberState__Array_DEFINED) && !defined(IL2CPP_STRUCT_IGenericUberState__Array_FWDDECL)
#include <Modloader/app/structs/IGenericUberState__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGenericUberState__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
