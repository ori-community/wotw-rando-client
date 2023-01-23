#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_DEFINED)
#include <Modloader/app/structs/DtdParser__Fields.h>
#if defined(IL2CPP_STRUCT_DtdParser__Fields_DEFINED)
#define IL2CPP_STRUCT_DtdParser_DEFINED
struct DtdParser__Class;
struct DtdParser {
    struct DtdParser__Class* klass;
    MonitorData* monitor;
    struct DtdParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DtdParser_FWDDECL)
#define IL2CPP_STRUCT_DtdParser_FWDDECL
#include <Modloader/app/structs/DtdParser__Class.h>
#endif
#undef IL2CPP_STRUCT_DtdParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_DEFINED) && !defined(IL2CPP_STRUCT_DtdParser_FWDDECL)
#include <Modloader/app/structs/DtdParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
