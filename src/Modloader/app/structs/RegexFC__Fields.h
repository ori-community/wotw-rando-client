#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexFC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexFC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFC__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexFC__Fields_DEFINED
struct RegexCharClass;
struct __declspec(align(8)) RegexFC__Fields {
    struct RegexCharClass* _cc;
    bool _nullable;
    bool _caseInsensitive;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexFC__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexFC__Fields_FWDDECL
#include <Modloader/app/structs/RegexCharClass.h>
#endif
#undef IL2CPP_STRUCT_RegexFC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexFC__Fields_FWDDECL)
#include <Modloader/app/structs/RegexFC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexFC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
