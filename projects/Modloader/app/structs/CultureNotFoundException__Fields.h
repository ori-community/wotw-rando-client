#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureNotFoundException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureNotFoundException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureNotFoundException__Fields_DEFINED)
#include <Modloader/app/structs/ArgumentException__Fields.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#if defined(IL2CPP_STRUCT_ArgumentException__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_CultureNotFoundException__Fields_DEFINED
struct String;
struct CultureNotFoundException__Fields {
    struct ArgumentException__Fields _;
    struct String* m_invalidCultureName;
    struct Nullable_1_Int32_ m_invalidCultureId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CultureNotFoundException__Fields_FWDDECL)
#define IL2CPP_STRUCT_CultureNotFoundException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CultureNotFoundException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureNotFoundException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CultureNotFoundException__Fields_FWDDECL)
#include <Modloader/app/structs/CultureNotFoundException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureNotFoundException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
