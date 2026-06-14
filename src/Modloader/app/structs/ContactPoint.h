#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactPoint_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ContactPoint_DEFINED
struct ContactPoint {
    struct Vector3 m_Point;
    struct Vector3 m_Normal;
    int32_t m_ThisColliderInstanceID;
    int32_t m_OtherColliderInstanceID;
    float m_Separation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactPoint_FWDDECL)
#define IL2CPP_STRUCT_ContactPoint_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContactPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactPoint_DEFINED) && !defined(IL2CPP_STRUCT_ContactPoint_FWDDECL)
#include <Modloader/app/structs/ContactPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
