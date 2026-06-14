#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContent__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContent__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__Array_DEFINED)
#define IL2CPP_STRUCT_GUIContent__Array_DEFINED
struct GUIContent__Array__Class;
struct GUIContent;
struct GUIContent__Array {
    struct GUIContent__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GUIContent* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GUIContent__Array_FWDDECL)
#define IL2CPP_STRUCT_GUIContent__Array_FWDDECL
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIContent__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIContent__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__Array_DEFINED) && !defined(IL2CPP_STRUCT_GUIContent__Array_FWDDECL)
#include <Modloader/app/structs/GUIContent__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContent__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
