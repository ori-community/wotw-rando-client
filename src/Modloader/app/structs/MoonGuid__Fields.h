#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonGuid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonGuid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGuid__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonGuid__Fields_DEFINED
struct String;
struct __declspec(align(8)) MoonGuid__Fields {
    int32_t A;
    int32_t B;
    int32_t C;
    int32_t D;
    struct String* m_guidString;
    bool m_stringOutofDate;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonGuid__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonGuid__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonGuid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGuid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonGuid__Fields_FWDDECL)
#include <Modloader/app/structs/MoonGuid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonGuid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
