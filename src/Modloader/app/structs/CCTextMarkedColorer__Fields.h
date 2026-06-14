#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextMarkedColorer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextMarkedColorer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer__Fields_DEFINED)
#include <Modloader/app/structs/CCTextModifier__Fields.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_CCTextModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CCTextMarkedColorer__Fields_DEFINED
struct String;
struct CCTextMarkedColorer__Fields {
    struct CCTextModifier__Fields _;
    struct String* beginSymbol;
    struct String* endSymbol;
    struct Color color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCTextMarkedColorer__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CCTextMarkedColorer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCTextMarkedColorer__Fields_FWDDECL)
#include <Modloader/app/structs/CCTextMarkedColorer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextMarkedColorer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
