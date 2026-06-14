#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionPointer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionPointer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionPointer__Fields_DEFINED)
#define IL2CPP_STRUCT_RegionPointer__Fields_DEFINED
struct Point;
struct __declspec(align(8)) RegionPointer__Fields {
    struct Point* point;
    int32_t id;
    double area;
};
#endif
#if !defined(IL2CPP_STRUCT_RegionPointer__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegionPointer__Fields_FWDDECL
#include <Modloader/app/structs/Point.h>
#endif
#undef IL2CPP_STRUCT_RegionPointer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionPointer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegionPointer__Fields_FWDDECL)
#include <Modloader/app/structs/RegionPointer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionPointer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
