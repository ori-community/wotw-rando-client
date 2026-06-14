#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonVector2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonVector2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector2__Fields_DEFINED)
#include <Modloader/app/structs/MoonTypeData.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#define IL2CPP_STRUCT_MoonVector2__Fields_DEFINED
struct IMoonTypeResolver;
struct IMoonType_1_UnityEngine_Vector2_;
struct __declspec(align(8)) MoonVector2__Fields {
    struct Vector2 m_staticValue;
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver* m_resolver;
    struct IMoonType_1_UnityEngine_Vector2_* m_cachedProxyType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonVector2__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonVector2__Fields_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector2_.h>
#endif
#undef IL2CPP_STRUCT_MoonVector2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonVector2__Fields_FWDDECL)
#include <Modloader/app/structs/MoonVector2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonVector2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
