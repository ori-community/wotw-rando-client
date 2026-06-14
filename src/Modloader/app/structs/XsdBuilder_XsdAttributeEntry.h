#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_DEFINED)
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_DEFINED
struct XsdBuilder_XsdAttributeEntry__Class;
struct XsdBuilder_XsdAttributeEntry {
    struct XsdBuilder_XsdAttributeEntry__Class* klass;
    MonitorData* monitor;
    struct XsdBuilder_XsdAttributeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_FWDDECL
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
