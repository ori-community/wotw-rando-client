#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_DEFINED)
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction__Fields.h>
#if defined(IL2CPP_STRUCT_XsdBuilder_XsdInitFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_DEFINED
struct XsdBuilder_XsdInitFunction__Class;
struct XsdBuilder_XsdInitFunction {
    struct XsdBuilder_XsdInitFunction__Class* klass;
    MonitorData* monitor;
    struct XsdBuilder_XsdInitFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_FWDDECL
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_XsdInitFunction_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
