#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxMessage_DEFINED)
#include <Modloader/app/structs/TextBoxMessage__Fields.h>
#if defined(IL2CPP_STRUCT_TextBoxMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_TextBoxMessage_DEFINED
struct TextBoxMessage__Class;
struct TextBoxMessage {
    struct TextBoxMessage__Class* klass;
    MonitorData* monitor;
    struct TextBoxMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextBoxMessage_FWDDECL)
#define IL2CPP_STRUCT_TextBoxMessage_FWDDECL
#include <Modloader/app/structs/TextBoxMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_TextBoxMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxMessage_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxMessage_FWDDECL)
#include <Modloader/app/structs/TextBoxMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
