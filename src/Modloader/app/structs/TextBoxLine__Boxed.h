#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxLine__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxLine__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxLine__Boxed_DEFINED)
#include <Modloader/app/structs/TextBoxLine.h>
#if defined(IL2CPP_STRUCT_TextBoxLine_DEFINED)
#define IL2CPP_STRUCT_TextBoxLine__Boxed_DEFINED
struct TextBoxLine__Class;
struct TextBoxLine__Boxed {
    struct TextBoxLine__Class* klass;
    MonitorData* monitor;
    struct TextBoxLine fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextBoxLine__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TextBoxLine__Boxed_FWDDECL
#include <Modloader/app/structs/TextBoxLine__Class.h>
#endif
#undef IL2CPP_STRUCT_TextBoxLine__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxLine__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxLine__Boxed_FWDDECL)
#include <Modloader/app/structs/TextBoxLine__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxLine__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
