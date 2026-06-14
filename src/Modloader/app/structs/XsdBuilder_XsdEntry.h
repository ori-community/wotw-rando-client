#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_XsdEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry_DEFINED)
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Fields.h>
#if defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry_DEFINED
struct XsdBuilder_XsdEntry__Class;
struct XsdBuilder_XsdEntry {
    struct XsdBuilder_XsdEntry__Class* klass;
    MonitorData* monitor;
    struct XsdBuilder_XsdEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry_FWDDECL
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_XsdEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_XsdEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_XsdEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
