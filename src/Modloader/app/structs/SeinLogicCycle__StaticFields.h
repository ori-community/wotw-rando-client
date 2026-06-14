#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLogicCycle__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLogicCycle__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SeinLogicCycle__StaticFields_DEFINED
struct Collider__Array;
struct SeinLogicCycle__StaticFields {
    bool m_doPolygonCheck;
    bool m_isTouchingColliders;
    bool m_isInsidePolygon;
    struct Collider__Array* m_overlapSphereResults;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SeinLogicCycle__StaticFields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinLogicCycle__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLogicCycle__StaticFields_FWDDECL)
#include <Modloader/app/structs/SeinLogicCycle__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLogicCycle__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
