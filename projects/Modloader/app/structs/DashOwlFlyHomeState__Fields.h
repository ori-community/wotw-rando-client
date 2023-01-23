#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_DEFINED)
#include <Modloader/app/structs/DashOwlState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_DEFINED
struct DashOwlFlyHomeState__Fields {
    struct DashOwlState__Fields _;
    bool m_flyLeft;
    float m_remainingTime;
    float m_duration;
    struct Vector3 m_startPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlFlyHomeState__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlFlyHomeState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlFlyHomeState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
