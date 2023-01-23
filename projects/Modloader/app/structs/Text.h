#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Text_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Text_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text_DEFINED)
#include <Modloader/app/structs/Text__Fields.h>
#if defined(IL2CPP_STRUCT_Text__Fields_DEFINED)
#define IL2CPP_STRUCT_Text_DEFINED
struct Text__Class;
struct Text {
    struct Text__Class* klass;
    MonitorData* monitor;
    struct Text__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Text_FWDDECL)
#define IL2CPP_STRUCT_Text_FWDDECL
#include <Modloader/app/structs/Text__Class.h>
#endif
#undef IL2CPP_STRUCT_Text_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text_DEFINED) && !defined(IL2CPP_STRUCT_Text_FWDDECL)
#include <Modloader/app/structs/Text.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Text.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
