#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesManaged__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesManaged__Fields_DEFINED)
#include <Modloader/app/structs/Aes__Fields.h>
#if defined(IL2CPP_STRUCT_Aes__Fields_DEFINED)
#define IL2CPP_STRUCT_AesManaged__Fields_DEFINED
struct RijndaelManaged;
struct AesManaged__Fields {
    struct Aes__Fields _;
    struct RijndaelManaged* m_rijndael;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AesManaged__Fields_FWDDECL)
#define IL2CPP_STRUCT_AesManaged__Fields_FWDDECL
#include <Modloader/app/structs/RijndaelManaged.h>
#endif
#undef IL2CPP_STRUCT_AesManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesManaged__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AesManaged__Fields_FWDDECL)
#include <Modloader/app/structs/AesManaged__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesManaged__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
