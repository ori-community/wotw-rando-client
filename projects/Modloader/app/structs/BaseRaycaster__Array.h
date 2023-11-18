#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseRaycaster__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseRaycaster__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseRaycaster__Array_DEFINED)
#define IL2CPP_STRUCT_BaseRaycaster__Array_DEFINED
struct BaseRaycaster__Array__Class;
struct BaseRaycaster;
struct BaseRaycaster__Array {
    struct BaseRaycaster__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct BaseRaycaster* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_BaseRaycaster__Array_FWDDECL)
#define IL2CPP_STRUCT_BaseRaycaster__Array_FWDDECL
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/BaseRaycaster__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseRaycaster__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseRaycaster__Array_DEFINED) && !defined(IL2CPP_STRUCT_BaseRaycaster__Array_FWDDECL)
#include <Modloader/app/structs/BaseRaycaster__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseRaycaster__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
