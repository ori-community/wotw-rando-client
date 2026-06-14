#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlToDatasetMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlToDatasetMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_DEFINED)
#include <Modloader/app/structs/XmlToDatasetMap__Fields.h>
#if defined(IL2CPP_STRUCT_XmlToDatasetMap__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlToDatasetMap_DEFINED
struct XmlToDatasetMap__Class;
struct XmlToDatasetMap {
    struct XmlToDatasetMap__Class* klass;
    MonitorData* monitor;
    struct XmlToDatasetMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_FWDDECL)
#define IL2CPP_STRUCT_XmlToDatasetMap_FWDDECL
#include <Modloader/app/structs/XmlToDatasetMap__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlToDatasetMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_DEFINED) && !defined(IL2CPP_STRUCT_XmlToDatasetMap_FWDDECL)
#include <Modloader/app/structs/XmlToDatasetMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlToDatasetMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
