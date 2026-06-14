#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCFont_Char__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCFont_Char__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_Char__Array_DEFINED)
#define IL2CPP_STRUCT_CCFont_Char__Array_DEFINED
struct CCFont_Char__Array__Class;
struct CCFont_Char;
struct CCFont_Char__Array {
    struct CCFont_Char__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct CCFont_Char* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_CCFont_Char__Array_FWDDECL)
#define IL2CPP_STRUCT_CCFont_Char__Array_FWDDECL
#include <Modloader/app/structs/CCFont_Char.h>
#include <Modloader/app/structs/CCFont_Char__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_CCFont_Char__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_Char__Array_DEFINED) && !defined(IL2CPP_STRUCT_CCFont_Char__Array_FWDDECL)
#include <Modloader/app/structs/CCFont_Char__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCFont_Char__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
