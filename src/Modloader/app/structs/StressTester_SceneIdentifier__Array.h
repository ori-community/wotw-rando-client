#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_DEFINED)
#define IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_DEFINED
struct StressTester_SceneIdentifier__Array__Class;
struct StressTester_SceneIdentifier;
struct StressTester_SceneIdentifier__Array {
    struct StressTester_SceneIdentifier__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct StressTester_SceneIdentifier* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_FWDDECL)
#define IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_FWDDECL
#include <Modloader/app/structs/StressTester_SceneIdentifier.h>
#include <Modloader/app/structs/StressTester_SceneIdentifier__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_DEFINED) && !defined(IL2CPP_STRUCT_StressTester_SceneIdentifier__Array_FWDDECL)
#include <Modloader/app/structs/StressTester_SceneIdentifier__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester_SceneIdentifier__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
