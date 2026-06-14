#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBox_DEFINED)
#include <Modloader/app/structs/TextBox__Fields.h>
#if defined(IL2CPP_STRUCT_TextBox__Fields_DEFINED)
#define IL2CPP_STRUCT_TextBox_DEFINED
struct TextBox__Class;
struct TextBox {
    struct TextBox__Class* klass;
    MonitorData* monitor;
    struct TextBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextBox_FWDDECL)
#define IL2CPP_STRUCT_TextBox_FWDDECL
#include <Modloader/app/structs/TextBox__Class.h>
#endif
#undef IL2CPP_STRUCT_TextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBox_DEFINED) && !defined(IL2CPP_STRUCT_TextBox_FWDDECL)
#include <Modloader/app/structs/TextBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
