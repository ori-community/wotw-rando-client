#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeLabel__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeLabel__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Array_DEFINED)
#include <Modloader/app/structs/RuntimeLabel.h>
#if defined(IL2CPP_STRUCT_RuntimeLabel_DEFINED)
#define IL2CPP_STRUCT_RuntimeLabel__Array_DEFINED
struct RuntimeLabel__Array__Class;
struct RuntimeLabel__Array {
    struct RuntimeLabel__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct RuntimeLabel vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Array_FWDDECL)
#define IL2CPP_STRUCT_RuntimeLabel__Array_FWDDECL
#include <Modloader/app/structs/RuntimeLabel__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeLabel__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Array_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeLabel__Array_FWDDECL)
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
