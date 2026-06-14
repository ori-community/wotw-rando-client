#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__DTString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__DTString_INITIALIZING
#if !defined(IL2CPP_STRUCT__DTString_DEFINED)
#define IL2CPP_STRUCT__DTString_DEFINED
struct String;
struct CompareInfo;
struct _DTString {
    struct String* Value;
    int32_t Index;
    int32_t len;
    uint16_t m_current;
    struct CompareInfo* m_info;
    bool m_checkDigitToken;
};
#endif
#if !defined(IL2CPP_STRUCT__DTString_FWDDECL)
#define IL2CPP_STRUCT__DTString_FWDDECL
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT__DTString_INITIALIZING
#if !defined(IL2CPP_STRUCT__DTString_DEFINED) && !defined(IL2CPP_STRUCT__DTString_FWDDECL)
#include <Modloader/app/structs/_DTString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_DTString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
