#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_DEFINED
struct TextInfo;
struct __declspec(align(8)) CaseInsensitiveHashCodeProvider__Fields {
    struct TextInfo* m_text;
};
#endif
#if !defined(IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_FWDDECL
#include <Modloader/app/structs/TextInfo.h>
#endif
#undef IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CaseInsensitiveHashCodeProvider__Fields_FWDDECL)
#include <Modloader/app/structs/CaseInsensitiveHashCodeProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaseInsensitiveHashCodeProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
