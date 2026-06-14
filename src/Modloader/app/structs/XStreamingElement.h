#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XStreamingElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XStreamingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XStreamingElement_DEFINED)
#include <Modloader/app/structs/XStreamingElement__Fields.h>
#if defined(IL2CPP_STRUCT_XStreamingElement__Fields_DEFINED)
#define IL2CPP_STRUCT_XStreamingElement_DEFINED
struct XStreamingElement__Class;
struct XStreamingElement {
    struct XStreamingElement__Class* klass;
    MonitorData* monitor;
    struct XStreamingElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XStreamingElement_FWDDECL)
#define IL2CPP_STRUCT_XStreamingElement_FWDDECL
#include <Modloader/app/structs/XStreamingElement__Class.h>
#endif
#undef IL2CPP_STRUCT_XStreamingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XStreamingElement_DEFINED) && !defined(IL2CPP_STRUCT_XStreamingElement_FWDDECL)
#include <Modloader/app/structs/XStreamingElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XStreamingElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
