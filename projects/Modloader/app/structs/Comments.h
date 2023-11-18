#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Comments_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Comments_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comments_DEFINED)
#include <Modloader/app/structs/Comments__Fields.h>
#if defined(IL2CPP_STRUCT_Comments__Fields_DEFINED)
#define IL2CPP_STRUCT_Comments_DEFINED
struct Comments__Class;
struct Comments {
    struct Comments__Class* klass;
    MonitorData* monitor;
    struct Comments__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Comments_FWDDECL)
#define IL2CPP_STRUCT_Comments_FWDDECL
#include <Modloader/app/structs/Comments__Class.h>
#endif
#undef IL2CPP_STRUCT_Comments_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comments_DEFINED) && !defined(IL2CPP_STRUCT_Comments_FWDDECL)
#include <Modloader/app/structs/Comments.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Comments.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
