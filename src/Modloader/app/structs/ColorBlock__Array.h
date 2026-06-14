#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorBlock__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorBlock__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock__Array_DEFINED)
#include <Modloader/app/structs/ColorBlock.h>
#if defined(IL2CPP_STRUCT_ColorBlock_DEFINED)
#define IL2CPP_STRUCT_ColorBlock__Array_DEFINED
struct ColorBlock__Array__Class;
struct ColorBlock__Array {
    struct ColorBlock__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ColorBlock vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorBlock__Array_FWDDECL)
#define IL2CPP_STRUCT_ColorBlock__Array_FWDDECL
#include <Modloader/app/structs/ColorBlock__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorBlock__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock__Array_DEFINED) && !defined(IL2CPP_STRUCT_ColorBlock__Array_FWDDECL)
#include <Modloader/app/structs/ColorBlock__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorBlock__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
