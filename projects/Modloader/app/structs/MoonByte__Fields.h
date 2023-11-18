#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonByte__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonByte__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonByte__Fields_DEFINED)
#include <Modloader/app/structs/MoonTypeData.h>
#if defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#define IL2CPP_STRUCT_MoonByte__Fields_DEFINED
struct IMoonTypeResolver;
struct IMoonType_1_System_Byte_;
struct __declspec(align(8)) MoonByte__Fields {
    uint8_t m_staticValue;
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver* m_resolver;
    struct IMoonType_1_System_Byte_* m_cachedProxyType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonByte__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonByte__Fields_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonType_1_System_Byte_.h>
#endif
#undef IL2CPP_STRUCT_MoonByte__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonByte__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonByte__Fields_FWDDECL)
#include <Modloader/app/structs/MoonByte__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonByte__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
