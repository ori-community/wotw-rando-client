#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type3Message_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type3Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type3Message_DEFINED)
#include <Modloader/app/structs/Type3Message__Fields.h>
#if defined(IL2CPP_STRUCT_Type3Message__Fields_DEFINED)
#define IL2CPP_STRUCT_Type3Message_DEFINED
struct Type3Message__Class;
struct Type3Message {
    struct Type3Message__Class* klass;
    MonitorData* monitor;
    struct Type3Message__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type3Message_FWDDECL)
#define IL2CPP_STRUCT_Type3Message_FWDDECL
#include <Modloader/app/structs/Type3Message__Class.h>
#endif
#undef IL2CPP_STRUCT_Type3Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type3Message_DEFINED) && !defined(IL2CPP_STRUCT_Type3Message_FWDDECL)
#include <Modloader/app/structs/Type3Message.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type3Message.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
