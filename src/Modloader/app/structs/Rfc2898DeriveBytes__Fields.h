#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_DEFINED)
#define IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_DEFINED
struct Byte__Array;
struct HMACSHA1;
struct __declspec(align(8)) Rfc2898DeriveBytes__Fields {
    struct Byte__Array* m_buffer;
    struct Byte__Array* m_salt;
    struct HMACSHA1* m_hmacsha1;
    struct Byte__Array* m_password;
    uint32_t m_iterations;
    uint32_t m_block;
    int32_t m_startIndex;
    int32_t m_endIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_FWDDECL)
#define IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HMACSHA1.h>
#endif
#undef IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Rfc2898DeriveBytes__Fields_FWDDECL)
#include <Modloader/app/structs/Rfc2898DeriveBytes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rfc2898DeriveBytes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
