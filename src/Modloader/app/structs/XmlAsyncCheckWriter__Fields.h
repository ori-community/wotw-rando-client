#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_DEFINED)
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_DEFINED
struct XmlWriter;
struct Task;
struct XmlAsyncCheckWriter__Fields {
    struct XmlWriter__Fields _;
    struct XmlWriter* coreWriter;
    struct Task* lastTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_FWDDECL
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAsyncCheckWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAsyncCheckWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAsyncCheckWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
