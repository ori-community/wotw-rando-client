#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Directory_SearchData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Directory_SearchData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Directory_SearchData__Array_DEFINED)
#define IL2CPP_STRUCT_Directory_SearchData__Array_DEFINED
struct Directory_SearchData__Array__Class;
struct Directory_SearchData;
struct Directory_SearchData__Array {
    struct Directory_SearchData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Directory_SearchData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Directory_SearchData__Array_FWDDECL)
#define IL2CPP_STRUCT_Directory_SearchData__Array_FWDDECL
#include <Modloader/app/structs/Directory_SearchData.h>
#include <Modloader/app/structs/Directory_SearchData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Directory_SearchData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Directory_SearchData__Array_DEFINED) && !defined(IL2CPP_STRUCT_Directory_SearchData__Array_FWDDECL)
#include <Modloader/app/structs/Directory_SearchData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Directory_SearchData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
