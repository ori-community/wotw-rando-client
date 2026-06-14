#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XSDSchema_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XSDSchema_INITIALIZING
#if !defined(IL2CPP_STRUCT_XSDSchema_DEFINED)
#include <Modloader/app/structs/XSDSchema__Fields.h>
#if defined(IL2CPP_STRUCT_XSDSchema__Fields_DEFINED)
#define IL2CPP_STRUCT_XSDSchema_DEFINED
struct XSDSchema__Class;
struct XSDSchema {
    struct XSDSchema__Class* klass;
    MonitorData* monitor;
    struct XSDSchema__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XSDSchema_FWDDECL)
#define IL2CPP_STRUCT_XSDSchema_FWDDECL
#include <Modloader/app/structs/XSDSchema__Class.h>
#endif
#undef IL2CPP_STRUCT_XSDSchema_INITIALIZING
#if !defined(IL2CPP_STRUCT_XSDSchema_DEFINED) && !defined(IL2CPP_STRUCT_XSDSchema_FWDDECL)
#include <Modloader/app/structs/XSDSchema.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XSDSchema.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
