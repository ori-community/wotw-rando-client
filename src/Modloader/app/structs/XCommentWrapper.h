#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XCommentWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XCommentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XCommentWrapper_DEFINED)
#include <Modloader/app/structs/XCommentWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XCommentWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XCommentWrapper_DEFINED
struct XCommentWrapper__Class;
struct XCommentWrapper {
    struct XCommentWrapper__Class* klass;
    MonitorData* monitor;
    struct XCommentWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XCommentWrapper_FWDDECL)
#define IL2CPP_STRUCT_XCommentWrapper_FWDDECL
#include <Modloader/app/structs/XCommentWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XCommentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XCommentWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XCommentWrapper_FWDDECL)
#include <Modloader/app/structs/XCommentWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XCommentWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
