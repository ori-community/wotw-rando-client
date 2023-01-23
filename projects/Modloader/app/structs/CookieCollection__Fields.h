#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_CookieCollection__Fields_DEFINED
struct ArrayList;
struct __declspec(align(8)) CookieCollection__Fields {
    int32_t m_version;
    struct ArrayList* m_list;
    struct DateTime m_TimeStamp;
    bool m_has_other_versions;
    bool m_IsReadOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#endif
#undef IL2CPP_STRUCT_CookieCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieCollection__Fields_FWDDECL)
#include <Modloader/app/structs/CookieCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
