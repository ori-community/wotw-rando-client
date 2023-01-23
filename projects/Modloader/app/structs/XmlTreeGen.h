#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTreeGen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTreeGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTreeGen_DEFINED)
#include <Modloader/app/structs/XmlTreeGen__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTreeGen__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTreeGen_DEFINED
struct XmlTreeGen__Class;
struct XmlTreeGen {
    struct XmlTreeGen__Class* klass;
    MonitorData* monitor;
    struct XmlTreeGen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTreeGen_FWDDECL)
#define IL2CPP_STRUCT_XmlTreeGen_FWDDECL
#include <Modloader/app/structs/XmlTreeGen__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTreeGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTreeGen_DEFINED) && !defined(IL2CPP_STRUCT_XmlTreeGen_FWDDECL)
#include <Modloader/app/structs/XmlTreeGen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTreeGen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
