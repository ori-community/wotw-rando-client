#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StompPost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StompPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompPost_DEFINED)
#include <Modloader/app/structs/StompPost__Fields.h>
#if defined(IL2CPP_STRUCT_StompPost__Fields_DEFINED)
#define IL2CPP_STRUCT_StompPost_DEFINED
struct StompPost__Class;
struct StompPost {
    struct StompPost__Class* klass;
    MonitorData* monitor;
    struct StompPost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StompPost_FWDDECL)
#define IL2CPP_STRUCT_StompPost_FWDDECL
#include <Modloader/app/structs/StompPost__Class.h>
#endif
#undef IL2CPP_STRUCT_StompPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompPost_DEFINED) && !defined(IL2CPP_STRUCT_StompPost_FWDDECL)
#include <Modloader/app/structs/StompPost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StompPost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
