#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDRSchema_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDRSchema_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema_DEFINED)
#include <Modloader/app/structs/XDRSchema__Fields.h>
#if defined(IL2CPP_STRUCT_XDRSchema__Fields_DEFINED)
#define IL2CPP_STRUCT_XDRSchema_DEFINED
struct XDRSchema__Class;
struct XDRSchema {
    struct XDRSchema__Class* klass;
    MonitorData* monitor;
    struct XDRSchema__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDRSchema_FWDDECL)
#define IL2CPP_STRUCT_XDRSchema_FWDDECL
#include <Modloader/app/structs/XDRSchema__Class.h>
#endif
#undef IL2CPP_STRUCT_XDRSchema_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema_DEFINED) && !defined(IL2CPP_STRUCT_XDRSchema_FWDDECL)
#include <Modloader/app/structs/XDRSchema.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDRSchema.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
