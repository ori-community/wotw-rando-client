#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextReader__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextReader__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TextReader__StaticFields_DEFINED
struct Func_2_Object_String_;
struct Func_2_Object_Int32_;
struct TextReader;
struct TextReader__StaticFields {
    struct Func_2_Object_String_* _ReadLineDelegate;
    struct Func_2_Object_Int32_* _ReadDelegate;
    struct TextReader* Null;
};
#endif
#if !defined(IL2CPP_STRUCT_TextReader__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TextReader__StaticFields_FWDDECL
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/TextReader.h>
#endif
#undef IL2CPP_STRUCT_TextReader__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TextReader__StaticFields_FWDDECL)
#include <Modloader/app/structs/TextReader__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextReader__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
