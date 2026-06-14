#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_DEFINED)
#include <Modloader/app/structs/XmlTextReaderImpl__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTextReaderImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_DEFINED
struct XmlTextReaderImpl__Class;
struct XmlTextReaderImpl {
    struct XmlTextReaderImpl__Class* klass;
    MonitorData* monitor;
    struct XmlTextReaderImpl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_FWDDECL
#include <Modloader/app/structs/XmlTextReaderImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
