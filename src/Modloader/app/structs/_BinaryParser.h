#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__BinaryParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__BinaryParser_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryParser_DEFINED)
#include <Modloader/app/structs/_BinaryParser__Fields.h>
#if defined(IL2CPP_STRUCT__BinaryParser__Fields_DEFINED)
#define IL2CPP_STRUCT__BinaryParser_DEFINED
struct _BinaryParser__Class;
struct _BinaryParser {
    struct _BinaryParser__Class* klass;
    MonitorData* monitor;
    struct _BinaryParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__BinaryParser_FWDDECL)
#define IL2CPP_STRUCT__BinaryParser_FWDDECL
#include <Modloader/app/structs/_BinaryParser__Class.h>
#endif
#undef IL2CPP_STRUCT__BinaryParser_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryParser_DEFINED) && !defined(IL2CPP_STRUCT__BinaryParser_FWDDECL)
#include <Modloader/app/structs/_BinaryParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_BinaryParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
