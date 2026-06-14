#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_DEFINED)
#include <Modloader/app/structs/MoonTypeData.h>
#if defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#define IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_DEFINED
struct IMoonTypeResolver;
struct IMoonType_1_LegacyTrigger_;
struct LegacyTrigger;
struct __declspec(align(8)) MoonReference_1_LegacyTrigger___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver* m_resolver;
    struct IMoonType_1_LegacyTrigger_* m_cachedProxyType;
    struct LegacyTrigger* m_volatileValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonType_1_LegacyTrigger_.h>
#include <Modloader/app/structs/LegacyTrigger.h>
#endif
#undef IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonReference_1_LegacyTrigger___Fields_FWDDECL)
#include <Modloader/app/structs/MoonReference_1_LegacyTrigger___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonReference_1_LegacyTrigger___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
