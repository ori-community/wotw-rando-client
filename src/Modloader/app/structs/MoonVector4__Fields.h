#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonVector4__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonVector4__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector4__Fields_DEFINED)
#include <Modloader/app/structs/MoonTypeData.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#define IL2CPP_STRUCT_MoonVector4__Fields_DEFINED
struct IMoonTypeResolver;
struct IMoonType_1_UnityEngine_Vector4_;
struct __declspec(align(8)) MoonVector4__Fields {
    struct Vector4 m_staticValue;
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver* m_resolver;
    struct IMoonType_1_UnityEngine_Vector4_* m_cachedProxyType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonVector4__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonVector4__Fields_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector4_.h>
#endif
#undef IL2CPP_STRUCT_MoonVector4__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector4__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonVector4__Fields_FWDDECL)
#include <Modloader/app/structs/MoonVector4__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonVector4__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
