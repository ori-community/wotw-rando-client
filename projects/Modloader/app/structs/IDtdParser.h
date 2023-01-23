#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParser_DEFINED)
#define IL2CPP_STRUCT_IDtdParser_DEFINED
struct IDtdParser__Class;
struct IDtdParser {
    struct IDtdParser__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdParser_FWDDECL)
#define IL2CPP_STRUCT_IDtdParser_FWDDECL
#include <Modloader/app/structs/IDtdParser__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParser_DEFINED) && !defined(IL2CPP_STRUCT_IDtdParser_FWDDECL)
#include <Modloader/app/structs/IDtdParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
