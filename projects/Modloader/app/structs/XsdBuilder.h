#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_DEFINED)
#include <Modloader/app/structs/XsdBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_XsdBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_DEFINED
struct XsdBuilder__Class;
struct XsdBuilder {
    struct XsdBuilder__Class* klass;
    MonitorData* monitor;
    struct XsdBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_FWDDECL
#include <Modloader/app/structs/XsdBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_FWDDECL)
#include <Modloader/app/structs/XsdBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
