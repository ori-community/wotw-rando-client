#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFall_WaterLine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFall_WaterLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterFall_WaterLine__Fields_DEFINED
struct List_1_Moon_WaterFall_WaterLine_Point_;
struct LineRenderer;
struct Rigidbody;
struct __declspec(align(8)) WaterFall_WaterLine__Fields {
    struct List_1_Moon_WaterFall_WaterLine_Point_* Points;
    struct LineRenderer* LineRenderer;
    struct Rigidbody* LastHitRigidbody;
    bool Splittable;
    float PreviousLength;
    struct Vector3 DestructionPoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFall_WaterLine__Fields_FWDDECL
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_Moon_WaterFall_WaterLine_Point_.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_WaterFall_WaterLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFall_WaterLine__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFall_WaterLine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFall_WaterLine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
