#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextStyle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyle_DEFINED)
#include <Modloader/app/structs/TextStyle__Fields.h>
#if defined(IL2CPP_STRUCT_TextStyle__Fields_DEFINED)
#define IL2CPP_STRUCT_TextStyle_DEFINED
struct TextStyle__Class;
struct TextStyle {
    struct TextStyle__Class* klass;
    MonitorData* monitor;
    struct TextStyle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextStyle_FWDDECL)
#define IL2CPP_STRUCT_TextStyle_FWDDECL
#include <Modloader/app/structs/TextStyle__Class.h>
#endif
#undef IL2CPP_STRUCT_TextStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyle_DEFINED) && !defined(IL2CPP_STRUCT_TextStyle_FWDDECL)
#include <Modloader/app/structs/TextStyle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextStyle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
