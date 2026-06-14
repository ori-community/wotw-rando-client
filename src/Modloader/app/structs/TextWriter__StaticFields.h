#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextWriter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TextWriter__StaticFields_DEFINED
struct TextWriter;
struct Action_1_Object_;
struct TextWriter__StaticFields {
    struct TextWriter* Null;
    struct Action_1_Object_* _WriteCharDelegate;
    struct Action_1_Object_* _WriteStringDelegate;
    struct Action_1_Object_* _WriteCharArrayRangeDelegate;
    struct Action_1_Object_* _WriteLineCharDelegate;
    struct Action_1_Object_* _WriteLineStringDelegate;
    struct Action_1_Object_* _WriteLineCharArrayRangeDelegate;
    struct Action_1_Object_* _FlushDelegate;
};
#endif
#if !defined(IL2CPP_STRUCT_TextWriter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TextWriter__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_TextWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TextWriter__StaticFields_FWDDECL)
#include <Modloader/app/structs/TextWriter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextWriter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
