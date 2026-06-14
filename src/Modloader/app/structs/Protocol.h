#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Protocol_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Protocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_Protocol_DEFINED)
#include <Modloader/app/structs/Protocol__Fields.h>
#if defined(IL2CPP_STRUCT_Protocol__Fields_DEFINED)
#define IL2CPP_STRUCT_Protocol_DEFINED
struct Protocol__Class;
struct Protocol {
    struct Protocol__Class* klass;
    MonitorData* monitor;
    struct Protocol__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Protocol_FWDDECL)
#define IL2CPP_STRUCT_Protocol_FWDDECL
#include <Modloader/app/structs/Protocol__Class.h>
#endif
#undef IL2CPP_STRUCT_Protocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_Protocol_DEFINED) && !defined(IL2CPP_STRUCT_Protocol_FWDDECL)
#include <Modloader/app/structs/Protocol.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Protocol.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
