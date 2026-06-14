#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlWriter__Fields_DEFINED
struct Char__Array;
struct __declspec(align(8)) XmlWriter__Fields {
    struct Char__Array* writeNodeBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlWriter__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
