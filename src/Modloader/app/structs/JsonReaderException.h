#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonReaderException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonReaderException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReaderException_DEFINED)
#include <Modloader/app/structs/JsonReaderException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonReaderException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonReaderException_DEFINED
struct JsonReaderException__Class;
struct JsonReaderException {
    struct JsonReaderException__Class* klass;
    MonitorData* monitor;
    struct JsonReaderException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonReaderException_FWDDECL)
#define IL2CPP_STRUCT_JsonReaderException_FWDDECL
#include <Modloader/app/structs/JsonReaderException__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonReaderException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReaderException_DEFINED) && !defined(IL2CPP_STRUCT_JsonReaderException_FWDDECL)
#include <Modloader/app/structs/JsonReaderException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonReaderException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
