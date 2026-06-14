#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonColor32__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonColor32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor32__Fields_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/MoonTypeData.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#define IL2CPP_STRUCT_MoonColor32__Fields_DEFINED
struct IMoonTypeResolver;
struct IMoonType_1_UnityEngine_Color32_;
struct __declspec(align(8)) MoonColor32__Fields {
    struct Color32 m_staticValue;
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver* m_resolver;
    struct IMoonType_1_UnityEngine_Color32_* m_cachedProxyType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonColor32__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonColor32__Fields_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Color32_.h>
#endif
#undef IL2CPP_STRUCT_MoonColor32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor32__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonColor32__Fields_FWDDECL)
#include <Modloader/app/structs/MoonColor32__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonColor32__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
