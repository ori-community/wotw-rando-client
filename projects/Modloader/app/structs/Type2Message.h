#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type2Message_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type2Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type2Message_DEFINED)
#include <Modloader/app/structs/Type2Message__Fields.h>
#if defined(IL2CPP_STRUCT_Type2Message__Fields_DEFINED)
#define IL2CPP_STRUCT_Type2Message_DEFINED
struct Type2Message__Class;
struct Type2Message {
    struct Type2Message__Class* klass;
    MonitorData* monitor;
    struct Type2Message__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type2Message_FWDDECL)
#define IL2CPP_STRUCT_Type2Message_FWDDECL
#include <Modloader/app/structs/Type2Message__Class.h>
#endif
#undef IL2CPP_STRUCT_Type2Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type2Message_DEFINED) && !defined(IL2CPP_STRUCT_Type2Message_FWDDECL)
#include <Modloader/app/structs/Type2Message.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type2Message.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
