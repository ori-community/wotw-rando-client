#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathTracerOutput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathTracerOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTracerOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_PathTracerOutput__Fields_DEFINED
struct Vector2__Array__Array;
struct Vector2__Array;
struct __declspec(align(8)) PathTracerOutput__Fields {
    struct Vector2__Array__Array* Paths;
    struct Vector2__Array__Array* Holes;
    struct Vector2__Array* HoleLocations;
};
#endif
#if !defined(IL2CPP_STRUCT_PathTracerOutput__Fields_FWDDECL)
#define IL2CPP_STRUCT_PathTracerOutput__Fields_FWDDECL
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector2__Array__Array.h>
#endif
#undef IL2CPP_STRUCT_PathTracerOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTracerOutput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PathTracerOutput__Fields_FWDDECL)
#include <Modloader/app/structs/PathTracerOutput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathTracerOutput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
