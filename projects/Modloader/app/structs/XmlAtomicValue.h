#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAtomicValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAtomicValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_DEFINED)
#include <Modloader/app/structs/XmlAtomicValue__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAtomicValue__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAtomicValue_DEFINED
struct XmlAtomicValue__Class;
struct XmlAtomicValue {
    struct XmlAtomicValue__Class* klass;
    MonitorData* monitor;
    struct XmlAtomicValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_FWDDECL)
#define IL2CPP_STRUCT_XmlAtomicValue_FWDDECL
#include <Modloader/app/structs/XmlAtomicValue__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAtomicValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_DEFINED) && !defined(IL2CPP_STRUCT_XmlAtomicValue_FWDDECL)
#include <Modloader/app/structs/XmlAtomicValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAtomicValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
