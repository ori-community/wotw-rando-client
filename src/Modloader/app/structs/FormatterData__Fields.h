#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatterData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatterData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterData__Fields_DEFINED)
#include <Modloader/app/structs/ProviderData__Fields.h>
#if defined(IL2CPP_STRUCT_ProviderData__Fields_DEFINED)
#define IL2CPP_STRUCT_FormatterData__Fields_DEFINED
struct FormatterData__Fields {
    struct ProviderData__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FormatterData__Fields_FWDDECL)
#define IL2CPP_STRUCT_FormatterData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FormatterData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FormatterData__Fields_FWDDECL)
#include <Modloader/app/structs/FormatterData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatterData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
