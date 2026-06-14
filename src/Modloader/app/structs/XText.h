#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XText_INITIALIZING
#if !defined(IL2CPP_STRUCT_XText_DEFINED)
#include <Modloader/app/structs/XText__Fields.h>
#if defined(IL2CPP_STRUCT_XText__Fields_DEFINED)
#define IL2CPP_STRUCT_XText_DEFINED
struct XText__Class;
struct XText {
    struct XText__Class* klass;
    MonitorData* monitor;
    struct XText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XText_FWDDECL)
#define IL2CPP_STRUCT_XText_FWDDECL
#include <Modloader/app/structs/XText__Class.h>
#endif
#undef IL2CPP_STRUCT_XText_INITIALIZING
#if !defined(IL2CPP_STRUCT_XText_DEFINED) && !defined(IL2CPP_STRUCT_XText_FWDDECL)
#include <Modloader/app/structs/XText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
