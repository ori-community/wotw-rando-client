#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RisingStompPost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RisingStompPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingStompPost_DEFINED)
#include <Modloader/app/structs/RisingStompPost__Fields.h>
#if defined(IL2CPP_STRUCT_RisingStompPost__Fields_DEFINED)
#define IL2CPP_STRUCT_RisingStompPost_DEFINED
struct RisingStompPost__Class;
struct RisingStompPost {
    struct RisingStompPost__Class* klass;
    MonitorData* monitor;
    struct RisingStompPost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RisingStompPost_FWDDECL)
#define IL2CPP_STRUCT_RisingStompPost_FWDDECL
#include <Modloader/app/structs/RisingStompPost__Class.h>
#endif
#undef IL2CPP_STRUCT_RisingStompPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingStompPost_DEFINED) && !defined(IL2CPP_STRUCT_RisingStompPost_FWDDECL)
#include <Modloader/app/structs/RisingStompPost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RisingStompPost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
