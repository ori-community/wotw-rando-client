#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_Link__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_Link__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Link__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBody_Link__Fields_DEFINED
struct VerletBody_Point;
struct __declspec(align(8)) VerletBody_Link__Fields {
    struct VerletBody_Point* m_p0;
    struct VerletBody_Point* m_p1;
    float m_restDistance;
    float m_stiffness;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_Link__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_Link__Fields_FWDDECL
#include <Modloader/app/structs/VerletBody_Point.h>
#endif
#undef IL2CPP_STRUCT_VerletBody_Link__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Link__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_Link__Fields_FWDDECL)
#include <Modloader/app/structs/VerletBody_Link__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody_Link__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
