#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XComment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_XComment_DEFINED)
#include <Modloader/app/structs/XComment__Fields.h>
#if defined(IL2CPP_STRUCT_XComment__Fields_DEFINED)
#define IL2CPP_STRUCT_XComment_DEFINED
struct XComment__Class;
struct XComment {
    struct XComment__Class* klass;
    MonitorData* monitor;
    struct XComment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XComment_FWDDECL)
#define IL2CPP_STRUCT_XComment_FWDDECL
#include <Modloader/app/structs/XComment__Class.h>
#endif
#undef IL2CPP_STRUCT_XComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_XComment_DEFINED) && !defined(IL2CPP_STRUCT_XComment_FWDDECL)
#include <Modloader/app/structs/XComment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XComment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
