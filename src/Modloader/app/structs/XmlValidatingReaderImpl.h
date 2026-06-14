#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlValidatingReaderImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl_DEFINED)
#include <Modloader/app/structs/XmlValidatingReaderImpl__Fields.h>
#if defined(IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl_DEFINED
struct XmlValidatingReaderImpl__Class;
struct XmlValidatingReaderImpl {
    struct XmlValidatingReaderImpl__Class* klass;
    MonitorData* monitor;
    struct XmlValidatingReaderImpl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl_FWDDECL)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl_FWDDECL
#include <Modloader/app/structs/XmlValidatingReaderImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlValidatingReaderImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl_DEFINED) && !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl_FWDDECL)
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
