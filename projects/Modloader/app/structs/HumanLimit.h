#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HumanLimit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HumanLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanLimit_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HumanLimit_DEFINED
struct HumanLimit {
    struct Vector3 m_Min;
    struct Vector3 m_Max;
    struct Vector3 m_Center;
    float m_AxisLength;
    int32_t m_UseDefaultValues;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HumanLimit_FWDDECL)
#define IL2CPP_STRUCT_HumanLimit_FWDDECL
#endif
#undef IL2CPP_STRUCT_HumanLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanLimit_DEFINED) && !defined(IL2CPP_STRUCT_HumanLimit_FWDDECL)
#include <Modloader/app/structs/HumanLimit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HumanLimit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
