#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdSimpleValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdSimpleValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdSimpleValue_DEFINED)
#include <Modloader/app/structs/XsdSimpleValue__Fields.h>
#if defined(IL2CPP_STRUCT_XsdSimpleValue__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdSimpleValue_DEFINED
struct XsdSimpleValue__Class;
struct XsdSimpleValue {
    struct XsdSimpleValue__Class* klass;
    MonitorData* monitor;
    struct XsdSimpleValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdSimpleValue_FWDDECL)
#define IL2CPP_STRUCT_XsdSimpleValue_FWDDECL
#include <Modloader/app/structs/XsdSimpleValue__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdSimpleValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdSimpleValue_DEFINED) && !defined(IL2CPP_STRUCT_XsdSimpleValue_FWDDECL)
#include <Modloader/app/structs/XsdSimpleValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdSimpleValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
