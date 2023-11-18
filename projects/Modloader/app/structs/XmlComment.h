#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlComment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlComment_DEFINED)
#include <Modloader/app/structs/XmlComment__Fields.h>
#if defined(IL2CPP_STRUCT_XmlComment__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlComment_DEFINED
struct XmlComment__Class;
struct XmlComment {
    struct XmlComment__Class* klass;
    MonitorData* monitor;
    struct XmlComment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlComment_FWDDECL)
#define IL2CPP_STRUCT_XmlComment_FWDDECL
#include <Modloader/app/structs/XmlComment__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlComment_DEFINED) && !defined(IL2CPP_STRUCT_XmlComment_FWDDECL)
#include <Modloader/app/structs/XmlComment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlComment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
